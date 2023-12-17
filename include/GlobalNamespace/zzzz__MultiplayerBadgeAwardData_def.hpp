#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeAwardData)
namespace System {
class IComparable;
}
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace UnityEngine {
class Sprite;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeAwardData);
// Type: ::MultiplayerBadgeAwardData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5111))
// CS Name: ::MultiplayerBadgeAwardData*
class CORDL_TYPE MultiplayerBadgeAwardData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field _awardedPlayer offset 0x10
 __declspec(property(get=__get__awardedPlayer, put=__set__awardedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _awardedPlayer;

/// @brief Field _weight offset 0x18
 __declspec(property(get=__get__weight, put=__set__weight)) float_t  _weight;

/// @brief Field _title offset 0x20
 __declspec(property(get=__get__title, put=__set__title)) ::StringW  _title;

/// @brief Field _subtitle offset 0x28
 __declspec(property(get=__get__subtitle, put=__set__subtitle)) ::StringW  _subtitle;

/// @brief Field _icon offset 0x30
 __declspec(property(get=__get__icon, put=__set__icon)) ::UnityEngine::Sprite*  _icon;

/// @brief Field _badgeData offset 0x38
 __declspec(property(get=__get__badgeData, put=__set__badgeData)) ::GlobalNamespace::MultiplayerBadgeDataSO*  _badgeData;

 __declspec(property(get=get_awardedPlayer)) ::GlobalNamespace::IConnectedPlayer*  awardedPlayer;

 __declspec(property(get=get_titleLocalizationKey)) ::StringW  titleLocalizationKey;

 __declspec(property(get=get_title)) ::StringW  title;

 __declspec(property(get=get_subtitle)) ::StringW  subtitle;

 __declspec(property(get=get_icon)) ::UnityEngine::Sprite*  icon;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

constexpr void __set__awardedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__awardedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__awardedPlayer() const;

constexpr void __set__weight(float_t  value) ;

constexpr float_t& __get__weight() ;

constexpr float_t const& __get__weight() const;

constexpr void __set__title(::StringW  value) ;

constexpr ::StringW& __get__title() ;

constexpr ::StringW const& __get__title() const;

constexpr void __set__subtitle(::StringW  value) ;

constexpr ::StringW& __get__subtitle() ;

constexpr ::StringW const& __get__subtitle() const;

constexpr void __set__icon(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__icon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__icon() const;

constexpr void __set__badgeData(::GlobalNamespace::MultiplayerBadgeDataSO*  value) ;

constexpr ::GlobalNamespace::MultiplayerBadgeDataSO* __get__badgeData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgeDataSO*> __get__badgeData() const;

/// @brief Method get_awardedPlayer addr 0x23cf92c size 0x8 virtual false final false
inline ::GlobalNamespace::IConnectedPlayer* get_awardedPlayer() ;

/// @brief Method get_titleLocalizationKey addr 0x23cf934 size 0x1c virtual false final false
inline ::StringW get_titleLocalizationKey() ;

/// @brief Method get_title addr 0x23cf950 size 0x8 virtual false final false
inline ::StringW get_title() ;

/// @brief Method get_subtitle addr 0x23cf958 size 0x8 virtual false final false
inline ::StringW get_subtitle() ;

/// @brief Method get_icon addr 0x23cf960 size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_icon() ;

static inline ::GlobalNamespace::MultiplayerBadgeAwardData* New_ctor(::GlobalNamespace::IConnectedPlayer*  awardedPlayer, float_t  weight, ::StringW  title, ::StringW  subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO*  badgeData) ;

/// @brief Method .ctor addr 0x23cdbfc size 0x60 virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  awardedPlayer, float_t  weight, ::StringW  title, ::StringW  subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO*  badgeData) ;

/// @brief Method CompareTo addr 0x23cf968 size 0xf0 virtual true final true
inline int32_t CompareTo(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgeAwardData(MultiplayerBadgeAwardData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgeAwardData(MultiplayerBadgeAwardData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgeAwardData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeAwardData, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeAwardData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeAwardData*, "", "MultiplayerBadgeAwardData");
