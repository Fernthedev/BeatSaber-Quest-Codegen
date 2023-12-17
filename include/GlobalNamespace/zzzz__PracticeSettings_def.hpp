#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PracticeSettings)
// Forward declare root types
namespace GlobalNamespace {
class PracticeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PracticeSettings);
// Type: ::PracticeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4661))
// CS Name: ::PracticeSettings*
class CORDL_TYPE PracticeSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field kDelayBeforeStart offset 0x0
static constexpr float_t  kDelayBeforeStart{1.0};

/// @brief Field _startSongTime offset 0x10
 __declspec(property(get=__get__startSongTime, put=__set__startSongTime)) float_t  _startSongTime;

/// @brief Field _songSpeedMul offset 0x14
 __declspec(property(get=__get__songSpeedMul, put=__set__songSpeedMul)) float_t  _songSpeedMul;

/// @brief Field _startInAdvanceAndClearNotes offset 0x18
 __declspec(property(get=__get__startInAdvanceAndClearNotes, put=__set__startInAdvanceAndClearNotes)) bool  _startInAdvanceAndClearNotes;

 __declspec(property(get=get_startSongTime, put=set_startSongTime)) float_t  startSongTime;

 __declspec(property(get=get_songSpeedMul, put=set_songSpeedMul)) float_t  songSpeedMul;

 __declspec(property(get=get_startInAdvanceAndClearNotes, put=set_startInAdvanceAndClearNotes)) bool  startInAdvanceAndClearNotes;

constexpr void __set__startSongTime(float_t  value) ;

constexpr float_t& __get__startSongTime() ;

constexpr float_t const& __get__startSongTime() const;

constexpr void __set__songSpeedMul(float_t  value) ;

constexpr float_t& __get__songSpeedMul() ;

constexpr float_t const& __get__songSpeedMul() const;

constexpr void __set__startInAdvanceAndClearNotes(bool  value) ;

constexpr bool& __get__startInAdvanceAndClearNotes() ;

constexpr bool const& __get__startInAdvanceAndClearNotes() const;

/// @brief Method get_startSongTime addr 0x23730f8 size 0x8 virtual false final false
inline float_t get_startSongTime() ;

/// @brief Method set_startSongTime addr 0x2373100 size 0x8 virtual false final false
inline void set_startSongTime(float_t  value) ;

/// @brief Method get_songSpeedMul addr 0x2373108 size 0x8 virtual false final false
inline float_t get_songSpeedMul() ;

/// @brief Method set_songSpeedMul addr 0x2373110 size 0x8 virtual false final false
inline void set_songSpeedMul(float_t  value) ;

/// @brief Method get_startInAdvanceAndClearNotes addr 0x2373118 size 0x8 virtual false final false
inline bool get_startInAdvanceAndClearNotes() ;

/// @brief Method set_startInAdvanceAndClearNotes addr 0x2373120 size 0xc virtual false final false
inline void set_startInAdvanceAndClearNotes(bool  value) ;

/// @brief Method get_defaultPracticeSettings addr 0x237312c size 0x74 virtual false final false
static inline ::GlobalNamespace::PracticeSettings* get_defaultPracticeSettings() ;

static inline ::GlobalNamespace::PracticeSettings* New_ctor() ;

/// @brief Method .ctor addr 0x23731a0 size 0x38 virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::PracticeSettings* New_ctor(::GlobalNamespace::PracticeSettings*  practiceSettings) ;

/// @brief Method .ctor addr 0x23731f0 size 0x40 virtual false final false
inline void _ctor(::GlobalNamespace::PracticeSettings*  practiceSettings) ;

static inline ::GlobalNamespace::PracticeSettings* New_ctor(float_t  startSongTime, float_t  songSpeedMul) ;

/// @brief Method .ctor addr 0x2373230 size 0x40 virtual false final false
inline void _ctor(float_t  startSongTime, float_t  songSpeedMul) ;

/// @brief Method ResetToDefault addr 0x23731d8 size 0x18 virtual false final false
inline void ResetToDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "PracticeSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PracticeSettings(PracticeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PracticeSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PracticeSettings(PracticeSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PracticeSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PracticeSettings, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PracticeSettings*, "", "PracticeSettings");
