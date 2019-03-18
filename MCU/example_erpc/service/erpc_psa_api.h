/*
 * Generated by erpcgen 1.7.1 on Mon Mar 18 14:01:48 2019.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_psa_api_h_)
#define _erpc_psa_api_h_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "erpc_version.h"

#if 10701 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif

#if !defined(ERPC_TYPE_DEFINITIONS)
#define ERPC_TYPE_DEFINITIONS

// Aliases data types declarations
/*! This is the matrix array type. The dimension has to be the same as the 
    matrix size const. Do not forget to re-generate the erpc code once the 
    matrix size is changed in the erpc file */
typedef int32_t Matrix[5][5];

// Constant variable declarations
/*! This const defines the matrix size. The value has to be the same as the 
    Matrix array dimension. Do not forget to re-generate the erpc code once the 
    matrix size is changed in the erpc file */
extern const int32_t matrix_size;

#endif // ERPC_TYPE_DEFINITIONS

/*! @brief MatrixMultiplyService identifiers */
enum _MatrixMultiplyService_ids
{
    kMatrixMultiplyService_service_id = 1,
    kMatrixMultiplyService_erpcMatrixMultiply_id = 1,
};

/*! @brief PsaFrameworkVersionService identifiers */
enum _PsaFrameworkVersionService_ids
{
    kPsaFrameworkVersionService_service_id = 2,
    kPsaFrameworkVersionService_psa_framework_version_id = 1,
};

/*! @brief PsaVersionService identifiers */
enum _PsaVersionService_ids
{
    kPsaVersionService_service_id = 3,
    kPsaVersionService_psa_version_id = 1,
};

/*! @brief PsaConnectService identifiers */
enum _PsaConnectService_ids
{
    kPsaConnectService_service_id = 4,
    kPsaConnectService_psa_connect_id = 1,
};

/*! @brief PsaCallService identifiers */
enum _PsaCallService_ids
{
    kPsaCallService_service_id = 5,
    kPsaCallService_psa_call_id = 1,
};

/*! @brief PsaCloseService identifiers */
enum _PsaCloseService_ids
{
    kPsaCloseService_service_id = 6,
    kPsaCloseService_psa_close_id = 1,
};

#if defined(__cplusplus)
extern "C" {
#endif

//! @name MatrixMultiplyService
//@{
void erpcMatrixMultiply(Matrix matrix1, Matrix matrix2, Matrix result_matrix);
//@} 

//! @name PsaFrameworkVersionService
//@{
uint32_t psa_framework_version(void);
//@} 

//! @name PsaVersionService
//@{
uint32_t psa_version(uint32_t sid);
//@} 

//! @name PsaConnectService
//@{
int32_t psa_connect(uint32_t sid, uint32_t minor_version);
//@} 

//! @name PsaCallService
//@{
int32_t psa_call(int32_t handle, int32_t in_vec, uint32_t in_len, int32_t out_vec, uint32_t out_len);
//@} 

//! @name PsaCloseService
//@{
void psa_close(int32_t handle);
//@} 

#if defined(__cplusplus)
}
#endif

#endif // _erpc_psa_api_h_
