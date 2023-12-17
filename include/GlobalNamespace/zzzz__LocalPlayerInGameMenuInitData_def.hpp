#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalPlayerInGameMenuInitData)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalPlayerInGameMenuInitData);
// Type: ::LocalPlayerInGameMenuInitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5051))
// CS Name: ::LocalPlayerInGameMenuInitData*
class CORDL_TYPE LocalPlayerInGameMenuInitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field previewBeatmapLevel offset 0x10
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

/// @brief Field beatmapDifficulty offset 0x18
 __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty;

/// @brief Field beatmapCharacteristic offset 0x20
 __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic;

/// @brief Field hasSong offset 0x28
 __declspec(property(get=__get_hasSong, put=__set_hasSong)) bool  hasSong;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get_beatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get_beatmapCharacteristic() const;

constexpr void __set_hasSong(bool  value) ;

constexpr bool& __get_hasSong() ;

constexpr bool const& __get_hasSong() const;

static inline ::GlobalNamespace::LocalPlayerInGameMenuInitData* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, bool  hasSong) ;

/// @brief Method .ctor addr 0x23c3de4 size 0x48 virtual false final false
inline void _ctor(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, bool  hasSong) ;

// Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalPlayerInGameMenuInitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalPlayerInGameMenuInitData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalPlayerInGameMenuInitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalPlayerInGameMenuInitData*, "", "LocalPlayerInGameMenuInitData");
