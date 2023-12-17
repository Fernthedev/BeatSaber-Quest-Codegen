#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelData)
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelData);
// Type: ::BeatmapLevelData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4347))
// CS Name: ::BeatmapLevelData*
class CORDL_TYPE BeatmapLevelData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _audioClip offset 0x10
 __declspec(property(get=__get__audioClip, put=__set__audioClip)) ::UnityEngine::AudioClip*  _audioClip;

/// @brief Field _difficultyBeatmapSets offset 0x18
 __declspec(property(get=__get__difficultyBeatmapSets, put=__set__difficultyBeatmapSets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  _difficultyBeatmapSets;

 __declspec(property(get=get_audioClip)) ::UnityEngine::AudioClip*  audioClip;

 __declspec(property(get=get_difficultyBeatmapSets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  difficultyBeatmapSets;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
constexpr operator  ::GlobalNamespace::IBeatmapLevelData*() noexcept;

constexpr void __set__audioClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__audioClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__audioClip() const;

constexpr void __set__difficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* __get__difficultyBeatmapSets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*> __get__difficultyBeatmapSets() const;

/// @brief Method get_audioClip addr 0x2342010 size 0x8 virtual true final true
inline ::UnityEngine::AudioClip* get_audioClip() ;

/// @brief Method get_difficultyBeatmapSets addr 0x2342018 size 0x8 virtual true final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets() ;

static inline ::GlobalNamespace::BeatmapLevelData* New_ctor(::UnityEngine::AudioClip*  audioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  difficultyBeatmapSets) ;

/// @brief Method .ctor addr 0x2342020 size 0x2c virtual false final false
inline void _ctor(::UnityEngine::AudioClip*  audioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  difficultyBeatmapSets) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelData(BeatmapLevelData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelData(BeatmapLevelData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelData*, "", "BeatmapLevelData");
