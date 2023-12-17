#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Manipulator)
namespace UnityEngine::UIElements {
class IManipulator;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Manipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Manipulator);
// Type: UnityEngine.UIElements::Manipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6905))
// CS Name: ::UnityEngine.UIElements::Manipulator*
class CORDL_TYPE Manipulator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Target offset 0x10
 __declspec(property(get=__get_m_Target, put=__set_m_Target)) ::UnityEngine::UIElements::VisualElement*  m_Target;

 __declspec(property(get=get_target, put=set_target)) ::UnityEngine::UIElements::VisualElement*  target;

/// @brief Convert operator to "::UnityEngine::UIElements::IManipulator"
constexpr operator  ::UnityEngine::UIElements::IManipulator*() noexcept;

constexpr void __set_m_Target(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Target() const;

/// @brief Method RegisterCallbacksOnTarget addr 0x0 size 0xffffffffffffffff virtual true final false
inline void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UnregisterCallbacksFromTarget() ;

/// @brief Method get_target addr 0x2dfef20 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::VisualElement* get_target() ;

/// @brief Method set_target addr 0x2dfef28 size 0x54 virtual true final true
inline void set_target(::UnityEngine::UIElements::VisualElement*  value) ;

static inline ::UnityEngine::UIElements::Manipulator* New_ctor() ;

/// @brief Method .ctor addr 0x2dfef7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Manipulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Manipulator(Manipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Manipulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Manipulator(Manipulator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Manipulator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Manipulator, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Manipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Manipulator*, "UnityEngine.UIElements", "Manipulator");
