#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorHash)
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class VectorHash;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::VectorHash);
// Type: UnityEngine.ProBuilder::VectorHash
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12215))
// CS Name: ::UnityEngine.ProBuilder::VectorHash*
class CORDL_TYPE VectorHash : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field FltCompareResolution offset 0x0
static constexpr float_t  FltCompareResolution{1000.0};

/// @brief Method HashFloat addr 0x2b7f47c size 0x40 virtual false final false
static inline int32_t HashFloat(float_t  f) ;

/// @brief Method GetHashCode addr 0x2b7f4bc size 0x7c virtual false final false
static inline int32_t GetHashCode(::UnityEngine::Vector2  v) ;

/// @brief Method GetHashCode addr 0x2b69de8 size 0xb0 virtual false final false
static inline int32_t GetHashCode(::UnityEngine::Vector3  v) ;

/// @brief Method GetHashCode addr 0x2b7f538 size 0xe0 virtual false final false
static inline int32_t GetHashCode(::UnityEngine::Vector4  v) ;

// Ctor Parameters [CppParam { name: "", ty: "VectorHash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorHash(VectorHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorHash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorHash(VectorHash const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VectorHash()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::VectorHash, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::VectorHash);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VectorHash*, "UnityEngine.ProBuilder", "VectorHash");
