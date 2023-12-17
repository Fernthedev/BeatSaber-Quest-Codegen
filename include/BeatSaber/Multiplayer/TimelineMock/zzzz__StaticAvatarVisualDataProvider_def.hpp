#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StaticAvatarVisualDataProvider)
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace BeatSaber::Multiplayer::TimelineMock {
class StaticAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider);
// Type: BeatSaber.Multiplayer.TimelineMock::StaticAvatarVisualDataProvider
namespace BeatSaber::Multiplayer::TimelineMock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15164))
// CS Name: ::BeatSaber.Multiplayer.TimelineMock::StaticAvatarVisualDataProvider*
class CORDL_TYPE StaticAvatarVisualDataProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _avatarsData offset 0x10
 __declspec(property(get=__get__avatarsData, put=__set__avatarsData)) ::GlobalNamespace::MultiplayerAvatarsData  _avatarsData;

 __declspec(property(get=get_avatarsData)) ::GlobalNamespace::MultiplayerAvatarsData  avatarsData;

/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr operator  ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept;

constexpr void __set__avatarsData(::GlobalNamespace::MultiplayerAvatarsData  value) ;

constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get__avatarsData() ;

constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get__avatarsData() const;

/// @brief Method get_avatarsData addr 0xe0a624 size 0x14 virtual true final true
inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData() ;

static inline ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider* New_ctor(::GlobalNamespace::MultiplayerAvatarsData  avatarsData) ;

/// @brief Method .ctor addr 0xe0a638 size 0x34 virtual false final false
inline void _ctor(::GlobalNamespace::MultiplayerAvatarsData  avatarsData) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticAvatarVisualDataProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticAvatarVisualDataProvider(StaticAvatarVisualDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticAvatarVisualDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticAvatarVisualDataProvider(StaticAvatarVisualDataProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticAvatarVisualDataProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::Multiplayer::TimelineMock
NEED_NO_BOX(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*, "BeatSaber.Multiplayer.TimelineMock", "StaticAvatarVisualDataProvider");
