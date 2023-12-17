#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelFailedTextOverride)
namespace GlobalNamespace {
class __LevelFailedTextOverride__LanguageOverride;
}
namespace GlobalNamespace {
class LevelFailedText;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride____c__DisplayClass6_0;
}
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedTextOverride;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride__LanguageOverride;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedTextOverride);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0);
// Type: ::LanguageOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4002))
// CS Name: ::LevelFailedTextOverride::LanguageOverride*
class CORDL_TYPE __LevelFailedTextOverride__LanguageOverride : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _language offset 0x10
 __declspec(property(get=__get__language, put=__set__language)) ::Polyglot::Language  _language;

/// @brief Field _overrideText offset 0x18
 __declspec(property(get=__get__overrideText, put=__set__overrideText)) ::StringW  _overrideText;

 __declspec(property(get=get_language)) ::Polyglot::Language  language;

 __declspec(property(get=get_overrideText)) ::StringW  overrideText;

constexpr void __set__language(::Polyglot::Language  value) ;

constexpr ::Polyglot::Language& __get__language() ;

constexpr ::Polyglot::Language const& __get__language() const;

constexpr void __set__overrideText(::StringW  value) ;

constexpr ::StringW& __get__overrideText() ;

constexpr ::StringW const& __get__overrideText() const;

/// @brief Method get_language addr 0x2220ff0 size 0x8 virtual false final false
inline ::Polyglot::Language get_language() ;

/// @brief Method get_overrideText addr 0x2220ff8 size 0x8 virtual false final false
inline ::StringW get_overrideText() ;

static inline ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* New_ctor() ;

/// @brief Method .ctor addr 0x2221000 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride__LanguageOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LevelFailedTextOverride__LanguageOverride(__LevelFailedTextOverride__LanguageOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride__LanguageOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LevelFailedTextOverride__LanguageOverride(__LevelFailedTextOverride__LanguageOverride const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LevelFailedTextOverride__LanguageOverride()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4003))
// CS Name: ::LevelFailedTextOverride::<>c__DisplayClass6_0*
class CORDL_TYPE __LevelFailedTextOverride____c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field selectedLanguage offset 0x10
 __declspec(property(get=__get_selectedLanguage, put=__set_selectedLanguage)) ::Polyglot::Language  selectedLanguage;

constexpr void __set_selectedLanguage(::Polyglot::Language  value) ;

constexpr ::Polyglot::Language& __get_selectedLanguage() ;

constexpr ::Polyglot::Language const& __get_selectedLanguage() const;

static inline ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0* New_ctor() ;

/// @brief Method .ctor addr 0x2220fe0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__0 addr 0x2221008 size 0x24 virtual false final false
inline bool _Start_b__0(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*  data) ;

// Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LevelFailedTextOverride____c__DisplayClass6_0(__LevelFailedTextOverride____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LevelFailedTextOverride____c__DisplayClass6_0(__LevelFailedTextOverride____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LevelFailedTextOverride____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelFailedTextOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4004))
// CS Name: ::LevelFailedTextOverride*
class CORDL_TYPE LevelFailedTextOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass6_0 = ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0;

using LanguageOverride = ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _perLanguageOverrides offset 0x18
 __declspec(property(get=__get__perLanguageOverrides, put=__set__perLanguageOverrides)) ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*,::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*>  _perLanguageOverrides;

/// @brief Field _beatmapLevelPacks offset 0x20
 __declspec(property(get=__get__beatmapLevelPacks, put=__set__beatmapLevelPacks)) ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*>  _beatmapLevelPacks;

/// @brief Field _beatmapLevels offset 0x28
 __declspec(property(get=__get__beatmapLevels, put=__set__beatmapLevels)) ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>  _beatmapLevels;

/// @brief Field _levelFailedTextEffect offset 0x30
 __declspec(property(get=__get__levelFailedTextEffect, put=__set__levelFailedTextEffect)) ::GlobalNamespace::LevelFailedText*  _levelFailedTextEffect;

/// @brief Field _difficultyBeatmap offset 0x38
 __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  _difficultyBeatmap;

constexpr void __set__perLanguageOverrides(::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*,::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*,::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*>& __get__perLanguageOverrides() ;

constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*,::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> const& __get__perLanguageOverrides() const;

constexpr void __set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*>& __get__beatmapLevelPacks() ;

constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelPackSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*> const& __get__beatmapLevelPacks() const;

constexpr void __set__beatmapLevels(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>& __get__beatmapLevels() ;

constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*> const& __get__beatmapLevels() const;

constexpr void __set__levelFailedTextEffect(::GlobalNamespace::LevelFailedText*  value) ;

constexpr ::GlobalNamespace::LevelFailedText* __get__levelFailedTextEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFailedText*> __get__levelFailedTextEffect() const;

constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get__difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get__difficultyBeatmap() const;

/// @brief Method Start addr 0x2220958 size 0x688 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::LevelFailedTextOverride* New_ctor() ;

/// @brief Method .ctor addr 0x2220fe8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelFailedTextOverride(LevelFailedTextOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelFailedTextOverride(LevelFailedTextOverride const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelFailedTextOverride()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedTextOverride, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextOverride*, "", "LevelFailedTextOverride");
NEED_NO_BOX(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, "", "LevelFailedTextOverride/LanguageOverride");
NEED_NO_BOX(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*, "", "LevelFailedTextOverride/<>c__DisplayClass6_0");
