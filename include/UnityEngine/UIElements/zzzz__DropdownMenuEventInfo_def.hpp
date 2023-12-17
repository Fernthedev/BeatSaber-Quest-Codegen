#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DropdownMenuEventInfo)
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuEventInfo);
// Type: UnityEngine.UIElements::DropdownMenuEventInfo
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6944))
// CS Name: ::UnityEngine.UIElements::DropdownMenuEventInfo*
class CORDL_TYPE DropdownMenuEventInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <modifiers>k__BackingField offset 0x10
 __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers  _modifiers_k__BackingField;

/// @brief Field <mousePosition>k__BackingField offset 0x14
 __declspec(property(get=__get__mousePosition_k__BackingField, put=__set__mousePosition_k__BackingField)) ::UnityEngine::Vector2  _mousePosition_k__BackingField;

/// @brief Field <localMousePosition>k__BackingField offset 0x1c
 __declspec(property(get=__get__localMousePosition_k__BackingField, put=__set__localMousePosition_k__BackingField)) ::UnityEngine::Vector2  _localMousePosition_k__BackingField;

/// @brief Field <character>k__BackingField offset 0x24
 __declspec(property(get=__get__character_k__BackingField, put=__set__character_k__BackingField)) char16_t  _character_k__BackingField;

/// @brief Field <keyCode>k__BackingField offset 0x28
 __declspec(property(get=__get__keyCode_k__BackingField, put=__set__keyCode_k__BackingField)) ::UnityEngine::KeyCode  _keyCode_k__BackingField;

constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value) ;

constexpr ::UnityEngine::EventModifiers& __get__modifiers_k__BackingField() ;

constexpr ::UnityEngine::EventModifiers const& __get__modifiers_k__BackingField() const;

constexpr void __set__mousePosition_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__mousePosition_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__mousePosition_k__BackingField() const;

constexpr void __set__localMousePosition_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__localMousePosition_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__localMousePosition_k__BackingField() const;

constexpr void __set__character_k__BackingField(char16_t  value) ;

constexpr char16_t& __get__character_k__BackingField() ;

constexpr char16_t const& __get__character_k__BackingField() const;

constexpr void __set__keyCode_k__BackingField(::UnityEngine::KeyCode  value) ;

constexpr ::UnityEngine::KeyCode& __get__keyCode_k__BackingField() ;

constexpr ::UnityEngine::KeyCode const& __get__keyCode_k__BackingField() const;

static inline ::UnityEngine::UIElements::DropdownMenuEventInfo* New_ctor(::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method .ctor addr 0x2e08220 size 0x31c virtual false final false
inline void _ctor(::UnityEngine::UIElements::EventBase*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuEventInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DropdownMenuEventInfo(DropdownMenuEventInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuEventInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropdownMenuEventInfo(DropdownMenuEventInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DropdownMenuEventInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuEventInfo, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuEventInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuEventInfo*, "UnityEngine.UIElements", "DropdownMenuEventInfo");
