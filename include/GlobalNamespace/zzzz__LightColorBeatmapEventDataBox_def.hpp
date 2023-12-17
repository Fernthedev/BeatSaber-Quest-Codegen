#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBeatmapEventDataBox)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class LightColorBaseData;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBeatmapEventDataBox);
// Type: ::LightColorBeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4320))
// CS Name: ::LightColorBeatmapEventDataBox*
class CORDL_TYPE LightColorBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::BeatmapEventDataBox)]{};

/// @brief Field _lightColorBaseDataList offset 0x38
 __declspec(property(get=__get__lightColorBaseDataList, put=__set__lightColorBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*  _lightColorBaseDataList;

/// @brief Field _brightnessStep offset 0x40
 __declspec(property(get=__get__brightnessStep, put=__set__brightnessStep)) float_t  _brightnessStep;

/// @brief Field _beatStep offset 0x44
 __declspec(property(get=__get__beatStep, put=__set__beatStep)) float_t  _beatStep;

/// @brief Field _brightnessDistributionShouldAffectFirstBaseEvent offset 0x48
 __declspec(property(get=__get__brightnessDistributionShouldAffectFirstBaseEvent, put=__set__brightnessDistributionShouldAffectFirstBaseEvent)) bool  _brightnessDistributionShouldAffectFirstBaseEvent;

 __declspec(property(get=get_subtypeIdentifier)) int32_t  subtypeIdentifier;

 __declspec(property(get=get_beatStep)) float_t  beatStep;

constexpr void __set__lightColorBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* __get__lightColorBaseDataList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*> __get__lightColorBaseDataList() const;

constexpr void __set__brightnessStep(float_t  value) ;

constexpr float_t& __get__brightnessStep() ;

constexpr float_t const& __get__brightnessStep() const;

constexpr void __set__beatStep(float_t  value) ;

constexpr float_t& __get__beatStep() ;

constexpr float_t const& __get__beatStep() const;

constexpr void __set__brightnessDistributionShouldAffectFirstBaseEvent(bool  value) ;

constexpr bool& __get__brightnessDistributionShouldAffectFirstBaseEvent() ;

constexpr bool const& __get__brightnessDistributionShouldAffectFirstBaseEvent() const;

/// @brief Method get_subtypeIdentifier addr 0x233b82c size 0x8 virtual true final false
inline int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x233b834 size 0x8 virtual true final false
inline float_t get_beatStep() ;

static inline ::GlobalNamespace::LightColorBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  brightnessDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  brightnessDistributionParamType, bool  brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  brightnessDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*  lightColorBaseDataList) ;

/// @brief Method .ctor addr 0x23366d4 size 0x208 virtual false final false
inline void _ctor(::GlobalNamespace::IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  brightnessDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  brightnessDistributionParamType, bool  brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  brightnessDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*  lightColorBaseDataList) ;

/// @brief Method Unpack addr 0x233b83c size 0x14e8 virtual true final false
inline void Unpack(float_t  groupBoxBeat, int32_t  groupId, int32_t  elementId, int32_t  durationOrderIndex, int32_t  distributionOrderIndex, float_t  maxBeat, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightColorBeatmapEventDataBox(LightColorBeatmapEventDataBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightColorBeatmapEventDataBox(LightColorBeatmapEventDataBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightColorBeatmapEventDataBox()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventDataBox*, "", "LightColorBeatmapEventDataBox");
