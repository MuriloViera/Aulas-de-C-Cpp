//Programa 10 Iris
//Elio A P Junior 829638

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

main() {

	float e1[200];
	float e2[200];
	float e3[200];
	float e4[200];
	float t1[200];
	float t2[200];
	float t3[200];
	float v, er;
	float I0[15], O0[15], I1[15], O1[15], I2[15], O2[15];
	int i=0, j=0, l=0, n, m, cs;
	float w1[15][14], w2[15][13];
	float nw1[15][14], nw2[15][13];
	float vw1[15][14], vw2[15][13];
	float d2[13], d1[14];

	/*Leitura dos dados do arquivo*/
    FILE *in;

   	if ((in =fopen("date_iris_n.txt", "rt"))== NULL){
	  printf("Cannot open input file.\n");
	  return 1;
	}


   	while(!feof(in)){
	  fscanf(in,"%f%f%f%f%f%f%f", &e1[i], &e2[i], &e3[i], &e4[i], &t1[i], &t2[i], &t3[i]);
	  i++;
	}

	for(j=0;j<(i-1);j++){
		printf("%f %f %f %f %f %f %f %d\n", e1[j],e2[j],e3[j],e4[j], t1[j], t2[j], t3[j], j);
	}

	fclose(in);

	/*Alocando os valores randomicos em w*/
	for(j = 1; j <= 3; j++){
		for(i = 1; i<=5; i++){
			w1[i][j] = ((rand()%100)/10.0) - 5.0;
			vw1[i][j] = 0.0;
		}
	}

	for(j = 1; j <= 3; j++){
		for(i = 1; i<=4; i++){
			w2[i][j] = ((rand()%100)/10.0) - 5.0;
			vw2[i][j] = 0.0;
		}
	}

	for(m=0; m<=1000; m++){
		er = 0.0;
		for(n = 0; n <= 10000; n++){
			cs = rand() % 150;
			I0[1] = e1[cs];
			I0[2] = e2[cs];
			I0[3] = e3[cs];
			I0[4] = e4[cs];
			I0[5] = 1.0;

			O0[1] = I0[1];
			O0[2] = I0[2];
			O0[3] = I0[3];
			O0[4] = I0[4];
			O0[5] = I0[5];

			for(j = 1; j <= 3; j++){
				I1[j] = 0.0;
				for(i=1; i<=5; i++){
					I1[j] += O0[i] * w1[i][j];
				}
				O1[j] = 1.0 / (1.0 + exp(-I1[j]));
			}

			I1[4] = 1.0;
			O1[4] = I1[4];

			for(l = 1; l <= 3; l++){
				I2[l] = 0.0;
				for(j=1; j<=4; j++){
					I2[l] += O1[j] * w2[j][l];
				}
				O2[l] = 1.0 / (1.0 + exp(-I2[l]));
			}

			/*BackPropagation*/

			d2[1] = (t1[cs] - O2[1]) * O2[1] * (1.0 - O2[1]);
			d2[2] = (t2[cs] - O2[2]) * O2[2] * (1.0 - O2[2]);
			d2[3] = (t3[cs] - O2[3]) * O2[3] * (1.0 - O2[3]);

			d1[1] = O1[1] * (1.0 - O1[1]) * (d2[1] * w2[1][1] + d2[2] *w2[1][2] + d2[3] * w2[1][3]);
			d1[2] = O1[2] * (1.0 - O1[2]) * (d2[1] * w2[2][1] + d2[2] *w2[2][2] + d2[3] * w2[2][3]);
			d1[3] = O1[3] * (1.0 - O1[3]) * (d2[1] * w2[3][1] + d2[2] *w2[3][2] + d2[3] * w2[3][3]);

			for(l=1; l<=3; l++){
				for(j=1; j<=4; j++){
					nw2[j][l] = w2[j][l] + 0.5 * d2[l] * O1[j] + 0.5 * vw2[j][l];
					vw2[j][l] = nw2[j][l] - w2[j][l];
					w2[j][l] = nw2[j][l];
				}
			}

			for(j=1; j<=3; j++){
				for(i=1; i<=5; i++){
					nw1[i][j] = w1[i][j] + 0.5 * d1[j] * O0[i] + 0.5 * vw1[i][j];
					vw1[i][j] = nw1[i][j] - w1[i][j];
					w1[i][j] = nw1[i][j];
				}
			}

			er += (t1[cs] - O2[1]) * (t1[cs] - O2[1]) + (t2[cs] - O2[2]) * (t2[cs] - O2[2]) + (t3[cs] - O2[3]) * (t3[cs] - O2[3]);
		}
		er = er / 10000.0;
		printf("%d %f \n", m, er);
	}

	for(j=1; j<=3; j++){
		for(i=1; i<=5; i++){
			printf("%f ", w1[i][j]);
		}
		printf("\n");
	}

	for(l=1; l<=3; l++){
		for(j=1; j<=4; j++){
			printf("%f ", w2[j][l]);
		}
		printf("\n");
	}

	for(m = 0; m<=149; m++) {
		I0[1] = e1[m];
		I0[2] = e2[m];
		I0[3] = e3[m];
		I0[4] = e4[m];
		I0[5] = 1.0;

		O0[1] = I0[1];
		O0[2] = I0[2];
		O0[3] = I0[3];
		O0[4] = I0[4];
		O0[5] = I0[5];

		for(j=1; j<=3; j++){
			I1[j] = 0.0;
			for(i=1; i<=5; i++){
				I1[j] += O0[i] * w1[i][j];
			}
			O1[j] = 1.0 / (1.0 + exp(-I1[j]));
		}
		I1[4] = 1.0;
		O1[4] = I1[4];

		for(l=1; l<=3; l++){
			I2[l] = 0;
			for(j=1; j<=4; j++){
				I2[l] +=O1[j] * w2[j][l];
			}
			O2[l] = 1.0 / (1.0 + exp(-I2[l]));
		}

		printf("%d %f %f %f %f %f %f %f \n", m, e1[m], e2[m], e3[m], e4[m], O2[1], O2[2], O2[3]);
	}
}


