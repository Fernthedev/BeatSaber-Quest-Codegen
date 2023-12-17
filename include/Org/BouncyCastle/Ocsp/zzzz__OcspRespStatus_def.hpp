#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcspRespStatus)
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspRespStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspRespStatus);
// Type: Org.BouncyCastle.Ocsp::OcspRespStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1618))
// CS Name: ::Org.BouncyCastle.Ocsp::OcspRespStatus*
class CORDL_TYPE OcspRespStatus : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field Successful offset 0x0
static constexpr int32_t  Successful{static_cast<int32_t>(0x0)};

/// @brief Field MalformedRequest offset 0x0
static constexpr int32_t  MalformedRequest{static_cast<int32_t>(0x1)};

/// @brief Field InternalError offset 0x0
static constexpr int32_t  InternalError{static_cast<int32_t>(0x2)};

/// @brief Field TryLater offset 0x0
static constexpr int32_t  TryLater{static_cast<int32_t>(0x3)};

/// @brief Field SigRequired offset 0x0
static constexpr int32_t  SigRequired{static_cast<int32_t>(0x5)};

/// @brief Field Unauthorized offset 0x0
static constexpr int32_t  Unauthorized{static_cast<int32_t>(0x6)};

static inline ::Org::BouncyCastle::Ocsp::OcspRespStatus* New_ctor() ;

/// @brief Method .ctor addr 0x10a2568 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OcspRespStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcspRespStatus(OcspRespStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcspRespStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcspRespStatus(OcspRespStatus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OcspRespStatus()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspRespStatus, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspRespStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspRespStatus*, "Org.BouncyCastle.Ocsp", "OcspRespStatus");
