#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Coroutine)
// Forward declare root types
namespace UnityEngine {
class Coroutine;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Coroutine);
// Type: UnityEngine::Coroutine
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10191))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10233))
// CS Name: ::UnityEngine::Coroutine*
class CORDL_TYPE Coroutine : public ::UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::YieldInstruction)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

static inline ::UnityEngine::Coroutine* New_ctor() ;

/// @brief Method .ctor addr 0x2cd3678 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Finalize addr 0x2cd3680 size 0xbc virtual true final false
inline void Finalize() ;

/// @brief Method ReleaseCoroutine addr 0x2cd373c size 0x3c virtual false final false
static inline void ReleaseCoroutine(::cordl_internals::intptr_t  ptr) ;

// Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Coroutine(Coroutine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Coroutine(Coroutine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Coroutine()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Coroutine, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Coroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Coroutine*, "UnityEngine", "Coroutine");
