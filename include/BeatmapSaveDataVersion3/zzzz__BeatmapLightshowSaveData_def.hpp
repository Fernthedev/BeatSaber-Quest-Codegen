#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLightshowSaveData)
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventBoxGroup;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventsCollection;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorBoostEventData;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BeatmapLightshowSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData);
// Type: BeatmapSaveDataVersion3::BeatmapLightshowSaveData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14782))
// CS Name: ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*
class CORDL_TYPE BeatmapLightshowSaveData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field basicBeatmapEvents offset 0x10
 __declspec(property(get=__get_basicBeatmapEvents, put=__set_basicBeatmapEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*  basicBeatmapEvents;

/// @brief Field colorBoostBeatmapEvents offset 0x18
 __declspec(property(get=__get_colorBoostBeatmapEvents, put=__set_colorBoostBeatmapEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*  colorBoostBeatmapEvents;

/// @brief Field lightColorEventBoxGroups offset 0x20
 __declspec(property(get=__get_lightColorEventBoxGroups, put=__set_lightColorEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*  lightColorEventBoxGroups;

/// @brief Field lightRotationEventBoxGroups offset 0x28
 __declspec(property(get=__get_lightRotationEventBoxGroups, put=__set_lightRotationEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*  lightRotationEventBoxGroups;

/// @brief Field lightTranslationEventBoxGroups offset 0x30
 __declspec(property(get=__get_lightTranslationEventBoxGroups, put=__set_lightTranslationEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*  lightTranslationEventBoxGroups;

/// @brief Field vfxEventBoxGroups offset 0x38
 __declspec(property(get=__get_vfxEventBoxGroups, put=__set_vfxEventBoxGroups)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*  vfxEventBoxGroups;

/// @brief Field _fxEventsCollection offset 0x40
 __declspec(property(get=__get__fxEventsCollection, put=__set__fxEventsCollection)) ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*  _fxEventsCollection;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

constexpr void __set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* __get_basicBeatmapEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*> __get_basicBeatmapEvents() const;

constexpr void __set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* __get_colorBoostBeatmapEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*> __get_colorBoostBeatmapEvents() const;

constexpr void __set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* __get_lightColorEventBoxGroups() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*> __get_lightColorEventBoxGroups() const;

constexpr void __set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* __get_lightRotationEventBoxGroups() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*> __get_lightRotationEventBoxGroups() const;

constexpr void __set_lightTranslationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* __get_lightTranslationEventBoxGroups() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*> __get_lightTranslationEventBoxGroups() const;

constexpr void __set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* __get_vfxEventBoxGroups() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*> __get_vfxEventBoxGroups() const;

constexpr void __set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*  value) ;

constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* __get__fxEventsCollection() ;

constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> __get__fxEventsCollection() const;

/// @brief Method get_isEmpty addr 0xe05298 size 0xe8 virtual false final false
inline bool get_isEmpty() ;

static inline ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* New_ctor() ;

/// @brief Method .ctor addr 0xe05380 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLightshowSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLightshowSaveData(BeatmapLightshowSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLightshowSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLightshowSaveData(BeatmapLightshowSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLightshowSaveData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, 0x48>, "Size mismatch!");

} // namespace end def BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*, "BeatmapSaveDataVersion3", "BeatmapLightshowSaveData");
