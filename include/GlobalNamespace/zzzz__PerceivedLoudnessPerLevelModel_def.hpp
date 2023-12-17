#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerceivedLoudnessPerLevelModel)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessPerLevelModel);
// Type: ::PerceivedLoudnessPerLevelModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4418))
// CS Name: ::PerceivedLoudnessPerLevelModel*
class CORDL_TYPE PerceivedLoudnessPerLevelModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kDefaultLoudness offset 0x0
static constexpr float_t  kDefaultLoudness{-6.0};

/// @brief Field kPerceivedLoudnessTarget offset 0x0
static constexpr float_t  kPerceivedLoudnessTarget{-11.0};

/// @brief Field kPerceivedLoudnessToMaxSfxLevelDifference offset 0x0
static constexpr float_t  kPerceivedLoudnessToMaxSfxLevelDifference{-10.0};

/// @brief Field _loudnessLevelPerLevelId offset 0x10
 __declspec(property(get=__get__loudnessLevelPerLevelId, put=__set__loudnessLevelPerLevelId)) ::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  _loudnessLevelPerLevelId;

constexpr void __set__loudnessLevelPerLevelId(::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,float_t>* __get__loudnessLevelPerLevelId() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,float_t>*> __get__loudnessLevelPerLevelId() const;

static inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel* New_ctor(::GlobalNamespace::PerceivedLoudnessPerLevelSO*  loudnessPerLeveData) ;

/// @brief Method .ctor addr 0x234d664 size 0xfc virtual false final false
inline void _ctor(::GlobalNamespace::PerceivedLoudnessPerLevelSO*  loudnessPerLeveData) ;

/// @brief Method ContainsLevelId addr 0x234d760 size 0x58 virtual false final false
inline bool ContainsLevelId(::StringW  levelId) ;

/// @brief Method GetLoudnessCorrectionByLevelId addr 0x234d7b8 size 0x20 virtual false final false
inline float_t GetLoudnessCorrectionByLevelId(::StringW  levelId) ;

/// @brief Method GetMaxSfxVolumeByLevelId addr 0x234d854 size 0x18 virtual false final false
inline float_t GetMaxSfxVolumeByLevelId(::StringW  levelId) ;

/// @brief Method GetLoudnessByLevelId addr 0x234d7d8 size 0x7c virtual false final false
inline float_t GetLoudnessByLevelId(::StringW  levelId) ;

// Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerceivedLoudnessPerLevelModel(PerceivedLoudnessPerLevelModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerceivedLoudnessPerLevelModel(PerceivedLoudnessPerLevelModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PerceivedLoudnessPerLevelModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessPerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessPerLevelModel*, "", "PerceivedLoudnessPerLevelModel");
