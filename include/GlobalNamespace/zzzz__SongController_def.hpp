#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongController)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SongController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongController);
// Type: ::SongController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5334))
// CS Name: ::SongController*
class CORDL_TYPE SongController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field songDidFinishEvent offset 0x18
 __declspec(property(get=__get_songDidFinishEvent, put=__set_songDidFinishEvent)) ::System::Action*  songDidFinishEvent;

constexpr void __set_songDidFinishEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_songDidFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_songDidFinishEvent() const;

/// @brief Method add_songDidFinishEvent addr 0x22689b0 size 0x9c virtual false final false
inline void add_songDidFinishEvent(::System::Action*  value) ;

/// @brief Method remove_songDidFinishEvent addr 0x2268a4c size 0x9c virtual false final false
inline void remove_songDidFinishEvent(::System::Action*  value) ;

/// @brief Method SendSongDidFinishEvent addr 0x2268780 size 0x1c virtual false final false
inline void SendSongDidFinishEvent() ;

/// @brief Method StopSong addr 0x0 size 0xffffffffffffffff virtual true final false
inline void StopSong() ;

/// @brief Method PauseSong addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PauseSong() ;

/// @brief Method ResumeSong addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ResumeSong() ;

static inline ::GlobalNamespace::SongController* New_ctor() ;

/// @brief Method .ctor addr 0x226898c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongController(SongController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongController(SongController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongController, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongController*, "", "SongController");
