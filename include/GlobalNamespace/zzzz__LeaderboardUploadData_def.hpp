#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardUploadData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardUploadData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardUploadData);
// Type: ::LeaderboardUploadData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4204))
// CS Name: ::LeaderboardUploadData*
class CORDL_TYPE LeaderboardUploadData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field playerName offset 0x10
 __declspec(property(get=__get_playerName, put=__set_playerName)) ::StringW  playerName;

/// @brief Field playerId offset 0x18
 __declspec(property(get=__get_playerId, put=__set_playerId)) ::StringW  playerId;

/// @brief Field score offset 0x20
 __declspec(property(get=__get_score, put=__set_score)) ::StringW  score;

/// @brief Field leaderboardId offset 0x28
 __declspec(property(get=__get_leaderboardId, put=__set_leaderboardId)) ::StringW  leaderboardId;

/// @brief Field songName offset 0x30
 __declspec(property(get=__get_songName, put=__set_songName)) ::StringW  songName;

/// @brief Field songSubName offset 0x38
 __declspec(property(get=__get_songSubName, put=__set_songSubName)) ::StringW  songSubName;

/// @brief Field authorName offset 0x40
 __declspec(property(get=__get_authorName, put=__set_authorName)) ::StringW  authorName;

/// @brief Field bpm offset 0x48
 __declspec(property(get=__get_bpm, put=__set_bpm)) ::StringW  bpm;

/// @brief Field difficulty offset 0x50
 __declspec(property(get=__get_difficulty, put=__set_difficulty)) ::StringW  difficulty;

/// @brief Field infoHash offset 0x58
 __declspec(property(get=__get_infoHash, put=__set_infoHash)) ::StringW  infoHash;

/// @brief Field modifiers offset 0x60
 __declspec(property(get=__get_modifiers, put=__set_modifiers)) ::System::Collections::Generic::List_1<::StringW>*  modifiers;

constexpr void __set_playerName(::StringW  value) ;

constexpr ::StringW& __get_playerName() ;

constexpr ::StringW const& __get_playerName() const;

constexpr void __set_playerId(::StringW  value) ;

constexpr ::StringW& __get_playerId() ;

constexpr ::StringW const& __get_playerId() const;

constexpr void __set_score(::StringW  value) ;

constexpr ::StringW& __get_score() ;

constexpr ::StringW const& __get_score() const;

constexpr void __set_leaderboardId(::StringW  value) ;

constexpr ::StringW& __get_leaderboardId() ;

constexpr ::StringW const& __get_leaderboardId() const;

constexpr void __set_songName(::StringW  value) ;

constexpr ::StringW& __get_songName() ;

constexpr ::StringW const& __get_songName() const;

constexpr void __set_songSubName(::StringW  value) ;

constexpr ::StringW& __get_songSubName() ;

constexpr ::StringW const& __get_songSubName() const;

constexpr void __set_authorName(::StringW  value) ;

constexpr ::StringW& __get_authorName() ;

constexpr ::StringW const& __get_authorName() const;

constexpr void __set_bpm(::StringW  value) ;

constexpr ::StringW& __get_bpm() ;

constexpr ::StringW const& __get_bpm() const;

constexpr void __set_difficulty(::StringW  value) ;

constexpr ::StringW& __get_difficulty() ;

constexpr ::StringW const& __get_difficulty() const;

constexpr void __set_infoHash(::StringW  value) ;

constexpr ::StringW& __get_infoHash() ;

constexpr ::StringW const& __get_infoHash() const;

constexpr void __set_modifiers(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_modifiers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_modifiers() const;

static inline ::GlobalNamespace::LeaderboardUploadData* New_ctor(::StringW  playerName, ::StringW  playerId, ::StringW  score, ::StringW  leaderboardId, ::StringW  songName, ::StringW  songSubName, ::StringW  authorName, ::StringW  bpm, ::StringW  difficulty, ::StringW  infoHash, ::System::Collections::Generic::List_1<::StringW>*  modifiers) ;

/// @brief Method .ctor addr 0x23274c8 size 0x8c virtual false final false
inline void _ctor(::StringW  playerName, ::StringW  playerId, ::StringW  score, ::StringW  leaderboardId, ::StringW  songName, ::StringW  songSubName, ::StringW  authorName, ::StringW  bpm, ::StringW  difficulty, ::StringW  infoHash, ::System::Collections::Generic::List_1<::StringW>*  modifiers) ;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardUploadData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardUploadData(LeaderboardUploadData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardUploadData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardUploadData(LeaderboardUploadData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeaderboardUploadData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardUploadData, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardUploadData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardUploadData*, "", "LeaderboardUploadData");
