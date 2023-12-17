#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionErrorDialogViewController)
namespace GlobalNamespace {
class __ConnectionErrorDialogViewController____c__DisplayClass0_0;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionErrorDialogViewController;
}
namespace GlobalNamespace {
class __ConnectionErrorDialogViewController____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectionErrorDialogViewController);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5617))
// CS Name: ::ConnectionErrorDialogViewController::<>c__DisplayClass0_0*
class CORDL_TYPE __ConnectionErrorDialogViewController____c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field buttonAction offset 0x10
 __declspec(property(get=__get_buttonAction, put=__set_buttonAction)) ::System::Action*  buttonAction;

constexpr void __set_buttonAction(::System::Action*  value) ;

constexpr ::System::Action* __get_buttonAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_buttonAction() const;

static inline ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0* New_ctor() ;

/// @brief Method .ctor addr 0x22ae8e8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Init>b__0 addr 0x22ae8f8 size 0x1c virtual false final false
inline void _Init_b__0(int32_t  btnIdx) ;

// Ctor Parameters [CppParam { name: "", ty: "__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConnectionErrorDialogViewController____c__DisplayClass0_0(__ConnectionErrorDialogViewController____c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConnectionErrorDialogViewController____c__DisplayClass0_0(__ConnectionErrorDialogViewController____c__DisplayClass0_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConnectionErrorDialogViewController____c__DisplayClass0_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ConnectionErrorDialogViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5763))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5618))
// CS Name: ::ConnectionErrorDialogViewController*
class CORDL_TYPE ConnectionErrorDialogViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
// Declarations
using __c__DisplayClass0_0 = ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::GlobalNamespace::SimpleDialogPromptViewController)]{};

/// @brief Method Init addr 0x22ae750 size 0x198 virtual false final false
inline void Init(::GlobalNamespace::DisconnectedReason  reason, ::System::Action*  buttonAction) ;

static inline ::GlobalNamespace::ConnectionErrorDialogViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22ae8f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionErrorDialogViewController(ConnectionErrorDialogViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionErrorDialogViewController(ConnectionErrorDialogViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectionErrorDialogViewController()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionErrorDialogViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectionErrorDialogViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionErrorDialogViewController*, "", "ConnectionErrorDialogViewController");
NEED_NO_BOX(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*, "", "ConnectionErrorDialogViewController/<>c__DisplayClass0_0");
