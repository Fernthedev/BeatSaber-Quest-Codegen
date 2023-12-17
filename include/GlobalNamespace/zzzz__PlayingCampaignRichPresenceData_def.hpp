#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayingCampaignRichPresenceData)
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingCampaignRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingCampaignRichPresenceData);
// Type: ::PlayingCampaignRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4675))
// CS Name: ::PlayingCampaignRichPresenceData*
class CORDL_TYPE PlayingCampaignRichPresenceData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kPlayingCampaignRichPresenceLocalizationKey offset 0x0
static constexpr ::ConstString  kPlayingCampaignRichPresenceLocalizationKey{u"PLAYING_CAMPAIGN_PRESENCE"};

/// @brief Field <localizedDescription>k__BackingField offset 0x10
 __declspec(property(get=__get__localizedDescription_k__BackingField, put=__set__localizedDescription_k__BackingField)) ::StringW  _localizedDescription_k__BackingField;

 __declspec(property(get=get_apiName)) ::StringW  apiName;

 __declspec(property(get=get_localizedDescription, put=set_localizedDescription)) ::StringW  localizedDescription;

/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr operator  ::GlobalNamespace::IRichPresenceData*() noexcept;

constexpr void __set__localizedDescription_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__localizedDescription_k__BackingField() ;

constexpr ::StringW const& __get__localizedDescription_k__BackingField() const;

/// @brief Method get_apiName addr 0x2373d1c size 0x40 virtual true final true
inline ::StringW get_apiName() ;

/// @brief Method get_localizedDescription addr 0x2373d5c size 0x8 virtual true final true
inline ::StringW get_localizedDescription() ;

/// @brief Method set_localizedDescription addr 0x2373d64 size 0x8 virtual false final false
inline void set_localizedDescription(::StringW  value) ;

static inline ::GlobalNamespace::PlayingCampaignRichPresenceData* New_ctor() ;

/// @brief Method .ctor addr 0x2373d6c size 0x5c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayingCampaignRichPresenceData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayingCampaignRichPresenceData(PlayingCampaignRichPresenceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayingCampaignRichPresenceData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayingCampaignRichPresenceData(PlayingCampaignRichPresenceData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayingCampaignRichPresenceData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingCampaignRichPresenceData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingCampaignRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingCampaignRichPresenceData*, "", "PlayingCampaignRichPresenceData");
