#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PromoViewController)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class __PromoViewController__ButtonPromoTypePair;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
class __PromoViewController____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PromoViewController;
}
namespace GlobalNamespace {
class __PromoViewController__ButtonPromoTypePair;
}
namespace GlobalNamespace {
class __PromoViewController____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PromoViewController);
MARK_REF_PTR_T(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair);
MARK_REF_PTR_T(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0);
// Type: ::ButtonPromoTypePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5735))
// CS Name: ::PromoViewController::ButtonPromoTypePair*
class CORDL_TYPE __PromoViewController__ButtonPromoTypePair : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field button offset 0x10
 __declspec(property(get=__get_button, put=__set_button)) ::UnityEngine::UI::Button*  button;

/// @brief Field previewLevelPack offset 0x18
 __declspec(property(get=__get_previewLevelPack, put=__set_previewLevelPack)) ::GlobalNamespace::PreviewBeatmapLevelPackSO*  previewLevelPack;

/// @brief Field levelPack offset 0x20
 __declspec(property(get=__get_levelPack, put=__set_levelPack)) ::GlobalNamespace::BeatmapLevelPackSO*  levelPack;

/// @brief Field beatmapLevel offset 0x28
 __declspec(property(get=__get_beatmapLevel, put=__set_beatmapLevel)) ::GlobalNamespace::BeatmapLevelSO*  beatmapLevel;

/// @brief Field _annotatedBeatmapLevelCollection offset 0x30
 __declspec(property(get=__get__annotatedBeatmapLevelCollection, put=__set__annotatedBeatmapLevelCollection)) ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  _annotatedBeatmapLevelCollection;

 __declspec(property(get=get_annotatedBeatmapLevelCollection)) ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  annotatedBeatmapLevelCollection;

constexpr void __set_button(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_button() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_button() const;

constexpr void __set_previewLevelPack(::GlobalNamespace::PreviewBeatmapLevelPackSO*  value) ;

constexpr ::GlobalNamespace::PreviewBeatmapLevelPackSO* __get_previewLevelPack() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelPackSO*> __get_previewLevelPack() const;

constexpr void __set_levelPack(::GlobalNamespace::BeatmapLevelPackSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelPackSO* __get_levelPack() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackSO*> __get_levelPack() const;

constexpr void __set_beatmapLevel(::GlobalNamespace::BeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO* __get_beatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> __get_beatmapLevel() const;

constexpr void __set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  value) ;

constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* __get__annotatedBeatmapLevelCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*> __get__annotatedBeatmapLevelCollection() const;

/// @brief Method get_annotatedBeatmapLevelCollection addr 0x22d5d7c size 0xb0 virtual false final false
inline ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_annotatedBeatmapLevelCollection() ;

static inline ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* New_ctor() ;

/// @brief Method .ctor addr 0x22d5e2c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PromoViewController__ButtonPromoTypePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PromoViewController__ButtonPromoTypePair(__PromoViewController__ButtonPromoTypePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PromoViewController__ButtonPromoTypePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PromoViewController__ButtonPromoTypePair(__PromoViewController__ButtonPromoTypePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PromoViewController__ButtonPromoTypePair()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5736))
// CS Name: ::PromoViewController::<>c__DisplayClass5_0*
class CORDL_TYPE __PromoViewController____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field item offset 0x10
 __declspec(property(get=__get_item, put=__set_item)) ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*  item;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PromoViewController*  __4__this;

constexpr void __set_item(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*  value) ;

constexpr ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* __get_item() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*> __get_item() const;

constexpr void __set___4__this(::GlobalNamespace::PromoViewController*  value) ;

constexpr ::GlobalNamespace::PromoViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PromoViewController*> __get___4__this() const;

static inline ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x22d5d6c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__0 addr 0x22d5e34 size 0x64 virtual false final false
inline void _DidActivate_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__PromoViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PromoViewController____c__DisplayClass5_0(__PromoViewController____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PromoViewController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PromoViewController____c__DisplayClass5_0(__PromoViewController____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PromoViewController____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PromoViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5737))
// CS Name: ::PromoViewController*
class CORDL_TYPE PromoViewController : public ::HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass5_0 = ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0;

using ButtonPromoTypePair = ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _elements offset 0x70
 __declspec(property(get=__get__elements, put=__set__elements)) ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>  _elements;

/// @brief Field promoButtonWasPressedEvent offset 0x78
 __declspec(property(get=__get_promoButtonWasPressedEvent, put=__set_promoButtonWasPressedEvent)) ::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  promoButtonWasPressedEvent;

constexpr void __set__elements(::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>& __get__elements() ;

constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> const& __get__elements() const;

constexpr void __set_promoButtonWasPressedEvent(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

constexpr ::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>* __get_promoButtonWasPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*> __get_promoButtonWasPressedEvent() const;

/// @brief Method add_promoButtonWasPressedEvent addr 0x22d5ad4 size 0xb0 virtual false final false
inline void add_promoButtonWasPressedEvent(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

/// @brief Method remove_promoButtonWasPressedEvent addr 0x22d5b84 size 0xb0 virtual false final false
inline void remove_promoButtonWasPressedEvent(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

/// @brief Method DidActivate addr 0x22d5c34 size 0x138 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::PromoViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d5d74 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PromoViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromoViewController(PromoViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromoViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromoViewController(PromoViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PromoViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoViewController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PromoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoViewController*, "", "PromoViewController");
NEED_NO_BOX(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, "", "PromoViewController/ButtonPromoTypePair");
NEED_NO_BOX(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*, "", "PromoViewController/<>c__DisplayClass5_0");
