#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiersSelectionView)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class __ModifiersSelectionView____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class __ModifiersSelectionView____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ModifiersSelectionView);
MARK_REF_PTR_T(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5797))
// CS Name: ::ModifiersSelectionView::<>c__DisplayClass3_0*
class CORDL_TYPE __ModifiersSelectionView____c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field modifierParams offset 0x10
 __declspec(property(get=__get_modifierParams, put=__set_modifierParams)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  modifierParams;

constexpr void __set_modifierParams(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* __get_modifierParams() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> __get_modifierParams() const;

static inline ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0* New_ctor() ;

/// @brief Method .ctor addr 0x22e771c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SetGameplayModifiers>b__0 addr 0x22e772c size 0x7c virtual false final false
inline void _SetGameplayModifiers_b__0(int32_t  idx, ::GlobalNamespace::GameplayModifierInfoListItem*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__ModifiersSelectionView____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ModifiersSelectionView____c__DisplayClass3_0(__ModifiersSelectionView____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ModifiersSelectionView____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ModifiersSelectionView____c__DisplayClass3_0(__ModifiersSelectionView____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ModifiersSelectionView____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ModifiersSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5798))
// CS Name: ::ModifiersSelectionView*
class CORDL_TYPE ModifiersSelectionView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass3_0 = ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _modifierInfoList offset 0x18
 __declspec(property(get=__get__modifierInfoList, put=__set__modifierInfoList)) ::GlobalNamespace::GameplayModifierInfoListItemsList*  _modifierInfoList;

/// @brief Field _noModifiersText offset 0x20
 __declspec(property(get=__get__noModifiersText, put=__set__noModifiersText)) ::TMPro::TextMeshProUGUI*  _noModifiersText;

/// @brief Field _gameplayModifiersModel offset 0x28
 __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel)) ::GlobalNamespace::GameplayModifiersModelSO*  _gameplayModifiersModel;

constexpr void __set__modifierInfoList(::GlobalNamespace::GameplayModifierInfoListItemsList*  value) ;

constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList* __get__modifierInfoList() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> __get__modifierInfoList() const;

constexpr void __set__noModifiersText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__noModifiersText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__noModifiersText() const;

constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO*  value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO* __get__gameplayModifiersModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> __get__gameplayModifiersModel() const;

/// @brief Method SetGameplayModifiers addr 0x22e75b0 size 0x16c virtual true final false
inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers*  gameplayModifiers) ;

static inline ::GlobalNamespace::ModifiersSelectionView* New_ctor() ;

/// @brief Method .ctor addr 0x22e7724 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModifiersSelectionView(ModifiersSelectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModifiersSelectionView(ModifiersSelectionView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ModifiersSelectionView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ModifiersSelectionView, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModifiersSelectionView*, "", "ModifiersSelectionView");
NEED_NO_BOX(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*, "", "ModifiersSelectionView/<>c__DisplayClass3_0");
