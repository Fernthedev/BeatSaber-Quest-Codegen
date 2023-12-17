#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Interactable)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace HMUI {
class Interactable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Interactable);
// Type: HMUI::Interactable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13537))
// CS Name: ::HMUI::Interactable*
class CORDL_TYPE Interactable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _interactable offset 0x18
 __declspec(property(get=__get__interactable, put=__set__interactable)) bool  _interactable;

/// @brief Field interactableChangeEvent offset 0x20
 __declspec(property(get=__get_interactableChangeEvent, put=__set_interactableChangeEvent)) ::System::Action_2<::HMUI::Interactable*,bool>*  interactableChangeEvent;

 __declspec(property(get=get_interactable, put=set_interactable)) bool  interactable;

constexpr void __set__interactable(bool  value) ;

constexpr bool& __get__interactable() ;

constexpr bool const& __get__interactable() const;

constexpr void __set_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*,bool>*  value) ;

constexpr ::System::Action_2<::HMUI::Interactable*,bool>* __get_interactableChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::Interactable*,bool>*> __get_interactableChangeEvent() const;

/// @brief Method add_interactableChangeEvent addr 0x211d9a8 size 0xb0 virtual false final false
inline void add_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*,bool>*  value) ;

/// @brief Method remove_interactableChangeEvent addr 0x211da58 size 0xb0 virtual false final false
inline void remove_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*,bool>*  value) ;

/// @brief Method get_interactable addr 0x211db08 size 0x8 virtual false final false
inline bool get_interactable() ;

/// @brief Method set_interactable addr 0x211db10 size 0x3c virtual false final false
inline void set_interactable(bool  value) ;

static inline ::HMUI::Interactable* New_ctor() ;

/// @brief Method .ctor addr 0x2117b40 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interactable(Interactable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interactable(Interactable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Interactable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Interactable, 0x28>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Interactable*, "HMUI", "Interactable");
