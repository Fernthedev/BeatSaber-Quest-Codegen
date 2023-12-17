#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__FxBeatmapEventDataBox_2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxBeatmapEventDataBox)
namespace GlobalNamespace {
class FloatFxBaseData;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBeatmapEventDataBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventDataBox);
// Type: ::FloatFxBeatmapEventDataBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14732)), TypeDefinitionIndex(TypeDefinitionIndex(4309)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4309), inst: 2547 }), TypeDefinitionIndex(TypeDefinitionIndex(4314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4311))
// CS Name: ::FloatFxBeatmapEventDataBox*
class CORDL_TYPE FloatFxBeatmapEventDataBox : public ::GlobalNamespace::FxBeatmapEventDataBox_2<::GlobalNamespace::FloatFxBaseData*,::GlobalNamespace::FloatFxBeatmapEventData*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::FxBeatmapEventDataBox_2<::GlobalNamespace::FloatFxBaseData*,::GlobalNamespace::FloatFxBeatmapEventData*>)]{};

/// @brief Field _vfxBaseDataList offset 0x40
 __declspec(property(get=__get__vfxBaseDataList, put=__set__vfxBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*  _vfxBaseDataList;

/// @brief Field _beatStep offset 0x48
 __declspec(property(get=__get__beatStep, put=__set__beatStep)) float_t  _beatStep;

 __declspec(property(get=get_subtypeIdentifier)) int32_t  subtypeIdentifier;

 __declspec(property(get=get_beatStep)) float_t  beatStep;

constexpr void __set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* __get__vfxBaseDataList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*> __get__vfxBaseDataList() const;

constexpr void __set__beatStep(float_t  value) ;

constexpr float_t& __get__beatStep() ;

constexpr float_t const& __get__beatStep() const;

/// @brief Method get_subtypeIdentifier addr 0x233adf4 size 0x8 virtual true final false
inline int32_t get_subtypeIdentifier() ;

/// @brief Method get_beatStep addr 0x233adfc size 0x8 virtual true final false
inline float_t get_beatStep() ;

static inline ::GlobalNamespace::FloatFxBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  eventDistributionParamType, float_t  eventDistributionParam, bool  eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*  fxBaseDataList) ;

/// @brief Method .ctor addr 0x2335f44 size 0xa8 virtual false final false
inline void _ctor(::GlobalNamespace::IndexFilter*  indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  beatDistributionParamType, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType  eventDistributionParamType, float_t  eventDistributionParam, bool  eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType  eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*  fxBaseDataList) ;

/// @brief Method CreateVfxBeatmapEventData addr 0x233ae04 size 0xb4 virtual true final false
inline ::GlobalNamespace::FloatFxBeatmapEventData* CreateVfxBeatmapEventData(::GlobalNamespace::FloatFxBaseData*  data, float_t  time, int32_t  groupId, int32_t  elementId, float_t  distributionOffset) ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxBeatmapEventDataBox(FloatFxBeatmapEventDataBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxBeatmapEventDataBox(FloatFxBeatmapEventDataBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxBeatmapEventDataBox()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventDataBox*, "", "FloatFxBeatmapEventDataBox");
