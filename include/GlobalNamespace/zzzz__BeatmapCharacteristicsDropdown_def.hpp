#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsDropdown)
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class __BeatmapCharacteristicsDropdown____c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class __BeatmapCharacteristicsDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicsDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5566))
// CS Name: ::BeatmapCharacteristicsDropdown::<>c*
class CORDL_TYPE __BeatmapCharacteristicsDropdown____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c*  value) ;

static inline ::GlobalNamespace::__BeatmapCharacteristicsDropdown____c* getStaticF___9() ;

static inline void setStaticF___9__5_0(::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*,::StringW>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*,::StringW>* getStaticF___9__5_0() ;

static inline ::GlobalNamespace::__BeatmapCharacteristicsDropdown____c* New_ctor() ;

/// @brief Method .ctor addr 0x22a43d4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__5_0 addr 0x22a43dc size 0x1c virtual false final false
inline ::StringW _Start_b__5_0(::GlobalNamespace::BeatmapCharacteristicSO*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicsDropdown____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapCharacteristicsDropdown____c(__BeatmapCharacteristicsDropdown____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicsDropdown____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapCharacteristicsDropdown____c(__BeatmapCharacteristicsDropdown____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapCharacteristicsDropdown____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__5_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCharacteristicsDropdown____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapCharacteristicsDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5567))
// CS Name: ::BeatmapCharacteristicsDropdown*
class CORDL_TYPE BeatmapCharacteristicsDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__BeatmapCharacteristicsDropdown____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _simpleTextDropdown offset 0x18
 __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown)) ::HMUI::SimpleTextDropdown*  _simpleTextDropdown;

/// @brief Field _beatmapCharacteristicCollection offset 0x20
 __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection*  _beatmapCharacteristicCollection;

/// @brief Field didSelectCellWithIdxEvent offset 0x28
 __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent)) ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  didSelectCellWithIdxEvent;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown*  value) ;

constexpr ::HMUI::SimpleTextDropdown* __get__simpleTextDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> __get__simpleTextDropdown() const;

constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* __get__beatmapCharacteristicCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> __get__beatmapCharacteristicCollection() const;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* __get_didSelectCellWithIdxEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> __get_didSelectCellWithIdxEvent() const;

/// @brief Method add_didSelectCellWithIdxEvent addr 0x22a3bf4 size 0xb0 virtual false final false
inline void add_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x22a3ca4 size 0xb0 virtual false final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

/// @brief Method Start addr 0x22a3d54 size 0x1b0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22a3f04 size 0xd4 virtual false final false
inline void OnDestroy() ;

/// @brief Method GetSelectedBeatmapCharacteristic addr 0x22a3fd8 size 0xb8 virtual false final false
inline ::GlobalNamespace::BeatmapCharacteristicSO* GetSelectedBeatmapCharacteristic() ;

/// @brief Method SelectCellWithBeatmapCharacteristic addr 0x22a4090 size 0x78 virtual false final false
inline void SelectCellWithBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic) ;

/// @brief Method SelectCellWithBeatmapCharacteristic addr 0x22a4108 size 0x184 virtual false final false
inline void SelectCellWithBeatmapCharacteristic(::StringW  serializedName) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x22a428c size 0xdc virtual false final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown* New_ctor() ;

/// @brief Method .ctor addr 0x22a4368 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapCharacteristicsDropdown()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsDropdown, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsDropdown*, "", "BeatmapCharacteristicsDropdown");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c*, "", "BeatmapCharacteristicsDropdown/<>c");
