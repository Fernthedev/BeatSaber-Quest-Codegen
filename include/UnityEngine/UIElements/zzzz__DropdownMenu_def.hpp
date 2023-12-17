#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownMenu)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenu);
// Type: UnityEngine.UIElements::DropdownMenu
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6949))
// CS Name: ::UnityEngine.UIElements::DropdownMenu*
class CORDL_TYPE DropdownMenu : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_MenuItems offset 0x10
 __declspec(property(get=__get_m_MenuItems, put=__set_m_MenuItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*  m_MenuItems;

/// @brief Field m_DropdownMenuEventInfo offset 0x18
 __declspec(property(get=__get_m_DropdownMenuEventInfo, put=__set_m_DropdownMenuEventInfo)) ::UnityEngine::UIElements::DropdownMenuEventInfo*  m_DropdownMenuEventInfo;

constexpr void __set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* __get_m_MenuItems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*> __get_m_MenuItems() const;

constexpr void __set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo*  value) ;

constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* __get_m_DropdownMenuEventInfo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> __get_m_DropdownMenuEventInfo() const;

/// @brief Method MenuItems addr 0x2e08604 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* MenuItems() ;

/// @brief Method AppendAction addr 0x2e0860c size 0x104 virtual false final false
inline void AppendAction(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  action, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*  actionStatusCallback, ::System::Object*  userData) ;

/// @brief Method InsertSeparator addr 0x2e08710 size 0x140 virtual false final false
inline void InsertSeparator(::StringW  subMenuPath, int32_t  atIndex) ;

/// @brief Method PrepareForDisplay addr 0x2e08850 size 0x2bc virtual false final false
inline void PrepareForDisplay(::UnityEngine::UIElements::EventBase*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DropdownMenu(DropdownMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropdownMenu(DropdownMenu const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DropdownMenu()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenu, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenu*, "UnityEngine.UIElements", "DropdownMenu");
