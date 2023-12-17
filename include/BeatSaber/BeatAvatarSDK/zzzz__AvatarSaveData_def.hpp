#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarSaveData)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarSaveData);
// Type: BeatSaber.BeatAvatarSDK::AvatarSaveData
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15691))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarSaveData*
class CORDL_TYPE AvatarSaveData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::System::Object)]{};

/// @brief Field headTopId offset 0x10
 __declspec(property(get=__get_headTopId, put=__set_headTopId)) ::StringW  headTopId;

/// @brief Field glassesId offset 0x18
 __declspec(property(get=__get_glassesId, put=__set_glassesId)) ::StringW  glassesId;

/// @brief Field facialHairId offset 0x20
 __declspec(property(get=__get_facialHairId, put=__set_facialHairId)) ::StringW  facialHairId;

/// @brief Field handsId offset 0x28
 __declspec(property(get=__get_handsId, put=__set_handsId)) ::StringW  handsId;

/// @brief Field clothesId offset 0x30
 __declspec(property(get=__get_clothesId, put=__set_clothesId)) ::StringW  clothesId;

/// @brief Field skinColorId offset 0x38
 __declspec(property(get=__get_skinColorId, put=__set_skinColorId)) ::StringW  skinColorId;

/// @brief Field mouthId offset 0x40
 __declspec(property(get=__get_mouthId, put=__set_mouthId)) ::StringW  mouthId;

/// @brief Field eyesId offset 0x48
 __declspec(property(get=__get_eyesId, put=__set_eyesId)) ::StringW  eyesId;

/// @brief Field headTopPrimaryColor offset 0x50
 __declspec(property(get=__get_headTopPrimaryColor, put=__set_headTopPrimaryColor)) ::UnityEngine::Color  headTopPrimaryColor;

/// @brief Field headTopSecondaryColor offset 0x60
 __declspec(property(get=__get_headTopSecondaryColor, put=__set_headTopSecondaryColor)) ::UnityEngine::Color  headTopSecondaryColor;

/// @brief Field glassesColor offset 0x70
 __declspec(property(get=__get_glassesColor, put=__set_glassesColor)) ::UnityEngine::Color  glassesColor;

/// @brief Field facialHairColor offset 0x80
 __declspec(property(get=__get_facialHairColor, put=__set_facialHairColor)) ::UnityEngine::Color  facialHairColor;

/// @brief Field handsColor offset 0x90
 __declspec(property(get=__get_handsColor, put=__set_handsColor)) ::UnityEngine::Color  handsColor;

/// @brief Field clothesPrimaryColor offset 0xa0
 __declspec(property(get=__get_clothesPrimaryColor, put=__set_clothesPrimaryColor)) ::UnityEngine::Color  clothesPrimaryColor;

/// @brief Field clothesSecondaryColor offset 0xb0
 __declspec(property(get=__get_clothesSecondaryColor, put=__set_clothesSecondaryColor)) ::UnityEngine::Color  clothesSecondaryColor;

/// @brief Field clothesDetailColor offset 0xc0
 __declspec(property(get=__get_clothesDetailColor, put=__set_clothesDetailColor)) ::UnityEngine::Color  clothesDetailColor;

constexpr void __set_headTopId(::StringW  value) ;

constexpr ::StringW& __get_headTopId() ;

constexpr ::StringW const& __get_headTopId() const;

constexpr void __set_glassesId(::StringW  value) ;

constexpr ::StringW& __get_glassesId() ;

constexpr ::StringW const& __get_glassesId() const;

constexpr void __set_facialHairId(::StringW  value) ;

constexpr ::StringW& __get_facialHairId() ;

constexpr ::StringW const& __get_facialHairId() const;

constexpr void __set_handsId(::StringW  value) ;

constexpr ::StringW& __get_handsId() ;

constexpr ::StringW const& __get_handsId() const;

constexpr void __set_clothesId(::StringW  value) ;

constexpr ::StringW& __get_clothesId() ;

constexpr ::StringW const& __get_clothesId() const;

constexpr void __set_skinColorId(::StringW  value) ;

constexpr ::StringW& __get_skinColorId() ;

constexpr ::StringW const& __get_skinColorId() const;

constexpr void __set_mouthId(::StringW  value) ;

constexpr ::StringW& __get_mouthId() ;

constexpr ::StringW const& __get_mouthId() const;

constexpr void __set_eyesId(::StringW  value) ;

constexpr ::StringW& __get_eyesId() ;

constexpr ::StringW const& __get_eyesId() const;

constexpr void __set_headTopPrimaryColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_headTopPrimaryColor() ;

constexpr ::UnityEngine::Color const& __get_headTopPrimaryColor() const;

constexpr void __set_headTopSecondaryColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_headTopSecondaryColor() ;

constexpr ::UnityEngine::Color const& __get_headTopSecondaryColor() const;

constexpr void __set_glassesColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_glassesColor() ;

constexpr ::UnityEngine::Color const& __get_glassesColor() const;

constexpr void __set_facialHairColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_facialHairColor() ;

constexpr ::UnityEngine::Color const& __get_facialHairColor() const;

constexpr void __set_handsColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_handsColor() ;

constexpr ::UnityEngine::Color const& __get_handsColor() const;

constexpr void __set_clothesPrimaryColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_clothesPrimaryColor() ;

constexpr ::UnityEngine::Color const& __get_clothesPrimaryColor() const;

constexpr void __set_clothesSecondaryColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_clothesSecondaryColor() ;

constexpr ::UnityEngine::Color const& __get_clothesSecondaryColor() const;

constexpr void __set_clothesDetailColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_clothesDetailColor() ;

constexpr ::UnityEngine::Color const& __get_clothesDetailColor() const;

static inline ::BeatSaber::BeatAvatarSDK::AvatarSaveData* New_ctor() ;

/// @brief Method .ctor addr 0xe197d0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSaveData(AvatarSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSaveData(AvatarSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarSaveData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarSaveData, 0xd0>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarSaveData*, "BeatSaber.BeatAvatarSDK", "AvatarSaveData");
