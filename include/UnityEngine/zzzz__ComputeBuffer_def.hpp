#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBuffer)
// Forward declare root types
namespace UnityEngine {
class ComputeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ComputeBuffer);
// Type: UnityEngine::ComputeBuffer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10260))
// CS Name: ::UnityEngine::ComputeBuffer*
class CORDL_TYPE ComputeBuffer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeBuffer(ComputeBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeBuffer(ComputeBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ComputeBuffer()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBuffer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
