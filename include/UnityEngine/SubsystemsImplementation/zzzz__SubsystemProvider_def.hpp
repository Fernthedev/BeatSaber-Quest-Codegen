#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubsystemProvider)
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemsImplementation::SubsystemProvider);
// Type: UnityEngine.SubsystemsImplementation::SubsystemProvider
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15974))
// CS Name: ::UnityEngine.SubsystemsImplementation::SubsystemProvider*
class CORDL_TYPE SubsystemProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Running offset 0x10
 __declspec(property(get=__get_m_Running, put=__set_m_Running)) bool  m_Running;

constexpr void __set_m_Running(bool  value) ;

constexpr bool& __get_m_Running() ;

constexpr bool const& __get_m_Running() const;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemProvider(SubsystemProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemProvider(SubsystemProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubsystemProvider()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemsImplementation::SubsystemProvider, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::SubsystemsImplementation
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemProvider");
