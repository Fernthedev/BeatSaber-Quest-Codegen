#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVfxBeatmapEventDataBox)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IntFxBaseData;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
// Forward declare root types
namespace GlobalNamespace {
class IntVfxBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntVfxBeatmapEventDataBox);
// Type: ::IntVfxBeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4310))
// CS Name: ::IntVfxBeatmapEventDataBox*
class CORDL_TYPE IntVfxBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::BeatmapEventDataBox)]{};

/// @brief Field _vfxBaseDataList offset 0x38
 __declspec(property(get=__get__vfxBaseDataList, put=__set__vfxBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*  _vfxBaseDataList;

/// @brief Field _beatStep offset 0x40
 __declspec(property(get=__get__beatStep, put=__set__beatStep)) float_t  _beatStep;

 __declspec(property(get=get_subtypeIdentifier)) int32_t  subtypeIdentifier;

 __declspec(property(get=get_beatStep)) float_t  beatStep;

constexpr void __set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* __get__vfxBaseDataList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*> __get__vfxBaseDataList() const;

constexpr void __set__beatStep(float_t  value) ;

constexpr float_t& __get__beatStep() ;

constexpr float_t const& __get__beatStep() const;

/// @brief Method get_subtypeIdentifier addr 0x233ade0 size 0x8 virtual true final false
inline int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x233ade8 size 0x8 virtual true final false
inline float_t get_beatStep() ;

static inline ::GlobalNamespace::IntVfxBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  eventDistributionParamType, float_t  eventDistributionParam, bool  eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*  vfxBaseDataList) ;

/// @brief Method .ctor addr 0x23356d4 size 0x208 virtual false final false
inline void _ctor(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  eventDistributionParamType, float_t  eventDistributionParam, bool  eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*  vfxBaseDataList) ;

/// @brief Method Unpack addr 0x233adf0 size 0x4 virtual true final false
inline void Unpack(float_t  groupBoxBeat, int32_t  groupId, int32_t  elementId, int32_t  durationOrderIndex, int32_t  distributionOrderIndex, float_t  maxBeat, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "IntVfxBeatmapEventDataBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntVfxBeatmapEventDataBox(IntVfxBeatmapEventDataBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntVfxBeatmapEventDataBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntVfxBeatmapEventDataBox(IntVfxBeatmapEventDataBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntVfxBeatmapEventDataBox()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntVfxBeatmapEventDataBox, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntVfxBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntVfxBeatmapEventDataBox*, "", "IntVfxBeatmapEventDataBox");
