#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeShader)
// Forward declare root types
namespace UnityEngine {
class ComputeShader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ComputeShader);
// Type: UnityEngine::ComputeShader
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10259))
// CS Name: ::UnityEngine::ComputeShader*
class CORDL_TYPE ComputeShader : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Object)]{};

/// @brief Method FindKernel addr 0x2cddbbc size 0x44 virtual false final false
inline int32_t FindKernel(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeShader(ComputeShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeShader(ComputeShader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ComputeShader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeShader, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
