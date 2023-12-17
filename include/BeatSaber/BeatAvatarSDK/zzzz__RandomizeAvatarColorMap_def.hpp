#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomizeAvatarColorMap)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class RandomizeAvatarColorMap;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap);
// Type: BeatSaber.BeatAvatarSDK::RandomizeAvatarColorMap
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15690))
// CS Name: ::BeatSaber.BeatAvatarSDK::RandomizeAvatarColorMap*
class CORDL_TYPE RandomizeAvatarColorMap : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <totalIndices>k__BackingField offset 0x10
 __declspec(property(get=__get__totalIndices_k__BackingField, put=__set__totalIndices_k__BackingField)) int32_t  _totalIndices_k__BackingField;

/// @brief Field <colorIndices>k__BackingField offset 0x18
 __declspec(property(get=__get__colorIndices_k__BackingField, put=__set__colorIndices_k__BackingField)) ::ArrayW<int32_t,::Array<int32_t>*>  _colorIndices_k__BackingField;

 __declspec(property(get=get_totalIndices)) int32_t  totalIndices;

 __declspec(property(get=get_colorIndices)) ::ArrayW<int32_t,::Array<int32_t>*>  colorIndices;

constexpr void __set__totalIndices_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__totalIndices_k__BackingField() ;

constexpr int32_t const& __get__totalIndices_k__BackingField() const;

constexpr void __set__colorIndices_k__BackingField(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__colorIndices_k__BackingField() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__colorIndices_k__BackingField() const;

/// @brief Method get_totalIndices addr 0xe1afb8 size 0x8 virtual false final false
inline int32_t get_totalIndices() ;

/// @brief Method get_colorIndices addr 0xe1afc0 size 0x8 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_colorIndices() ;

static inline ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap* New_ctor(int32_t  headTopPrimaryColorIndex, int32_t  headTopSecondaryColorIndex, int32_t  glassesColorIndex, int32_t  facialHairColorIndex, int32_t  handsColorIndex, int32_t  clothesPrimaryColorIndex, int32_t  clothesSecondaryColorIndex, int32_t  clothesDetailColorIndex) ;

/// @brief Method .ctor addr 0xe1aa38 size 0x188 virtual false final false
inline void _ctor(int32_t  headTopPrimaryColorIndex, int32_t  headTopSecondaryColorIndex, int32_t  glassesColorIndex, int32_t  facialHairColorIndex, int32_t  handsColorIndex, int32_t  clothesPrimaryColorIndex, int32_t  clothesSecondaryColorIndex, int32_t  clothesDetailColorIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeAvatarColorMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomizeAvatarColorMap(RandomizeAvatarColorMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeAvatarColorMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomizeAvatarColorMap(RandomizeAvatarColorMap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RandomizeAvatarColorMap()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap, 0x20>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, "BeatSaber.BeatAvatarSDK", "RandomizeAvatarColorMap");
