#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RelativeSfxVolumePerLevelSO)
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair;
}
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelCollectionSO;
}
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;
}
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair;
}
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RelativeSfxVolumePerLevelSO);
MARK_REF_PTR_T(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair);
MARK_REF_PTR_T(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair);
MARK_REF_PTR_T(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c);
// Type: ::RelativeSfxVolumePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4663))
// CS Name: ::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*
class CORDL_TYPE __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _previewLevel offset 0x10
 __declspec(property(get=__get__previewLevel, put=__set__previewLevel)) ::GlobalNamespace::PreviewBeatmapLevelSO*  _previewLevel;

/// @brief Field _relativeSfxVolume offset 0x18
 __declspec(property(get=__get__relativeSfxVolume, put=__set__relativeSfxVolume)) float_t  _relativeSfxVolume;

 __declspec(property(get=get_levelId)) ::StringW  levelId;

 __declspec(property(get=get_relativeSfxVolume)) float_t  relativeSfxVolume;

constexpr void __set__previewLevel(::GlobalNamespace::PreviewBeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::PreviewBeatmapLevelSO* __get__previewLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelSO*> __get__previewLevel() const;

constexpr void __set__relativeSfxVolume(float_t  value) ;

constexpr float_t& __get__relativeSfxVolume() ;

constexpr float_t const& __get__relativeSfxVolume() const;

/// @brief Method get_levelId addr 0x23732f0 size 0x1c virtual false final false
inline ::StringW get_levelId() ;

/// @brief Method get_relativeSfxVolume addr 0x237330c size 0x8 virtual false final false
inline float_t get_relativeSfxVolume() ;

static inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair* New_ctor() ;

/// @brief Method .ctor addr 0x2373314 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4664))
// CS Name: ::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePerPackPair::<>c*
class CORDL_TYPE __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*  value) ;

static inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c* getStaticF___9() ;

static inline void setStaticF___9__5_0(::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*,::StringW>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*,::StringW>* getStaticF___9__5_0() ;

static inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c* New_ctor() ;

/// @brief Method .ctor addr 0x23734b0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_levelIds>b__5_0 addr 0x23734b8 size 0x9c virtual false final false
inline ::StringW _get_levelIds_b__5_0(::GlobalNamespace::IPreviewBeatmapLevel*  a) ;

// Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__5_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RelativeSfxVolumePerPackPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4665))
// CS Name: ::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePerPackPair*
class CORDL_TYPE __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _previewLevelCollection offset 0x10
 __declspec(property(get=__get__previewLevelCollection, put=__set__previewLevelCollection)) ::GlobalNamespace::PreviewBeatmapLevelCollectionSO*  _previewLevelCollection;

/// @brief Field _relativeSfxVolume offset 0x18
 __declspec(property(get=__get__relativeSfxVolume, put=__set__relativeSfxVolume)) float_t  _relativeSfxVolume;

 __declspec(property(get=get_relativeSfxVolume)) float_t  relativeSfxVolume;

 __declspec(property(get=get_levelIds)) ::ArrayW<::StringW,::Array<::StringW>*>  levelIds;

constexpr void __set__previewLevelCollection(::GlobalNamespace::PreviewBeatmapLevelCollectionSO*  value) ;

constexpr ::GlobalNamespace::PreviewBeatmapLevelCollectionSO* __get__previewLevelCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*> __get__previewLevelCollection() const;

constexpr void __set__relativeSfxVolume(float_t  value) ;

constexpr float_t& __get__relativeSfxVolume() ;

constexpr float_t const& __get__relativeSfxVolume() const;

/// @brief Method get_relativeSfxVolume addr 0x237331c size 0x8 virtual false final false
inline float_t get_relativeSfxVolume() ;

/// @brief Method get_levelIds addr 0x2373324 size 0x120 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_levelIds() ;

static inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair* New_ctor() ;

/// @brief Method .ctor addr 0x2373444 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RelativeSfxVolumePerLevelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4666))
// CS Name: ::RelativeSfxVolumePerLevelSO*
class CORDL_TYPE RelativeSfxVolumePerLevelSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using RelativeSfxVolumePerPackPair = ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair;

using RelativeSfxVolumePair = ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _relativeSfxVolumePerPack offset 0x18
 __declspec(property(get=__get__relativeSfxVolumePerPack, put=__set__relativeSfxVolumePerPack)) ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>  _relativeSfxVolumePerPack;

/// @brief Field _relativeSfxVolumePerLevel offset 0x20
 __declspec(property(get=__get__relativeSfxVolumePerLevel, put=__set__relativeSfxVolumePerLevel)) ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>  _relativeSfxVolumePerLevel;

 __declspec(property(get=get_relativeSfxVolumePerLevel)) ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>  relativeSfxVolumePerLevel;

 __declspec(property(get=get_relativeSfxVolumePerPack)) ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>  relativeSfxVolumePerPack;

constexpr void __set__relativeSfxVolumePerPack(::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>& __get__relativeSfxVolumePerPack() ;

constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*> const& __get__relativeSfxVolumePerPack() const;

constexpr void __set__relativeSfxVolumePerLevel(::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>& __get__relativeSfxVolumePerLevel() ;

constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> const& __get__relativeSfxVolumePerLevel() const;

/// @brief Method get_relativeSfxVolumePerLevel addr 0x23732d8 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> get_relativeSfxVolumePerLevel() ;

/// @brief Method get_relativeSfxVolumePerPack addr 0x23732e0 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*,::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*> get_relativeSfxVolumePerPack() ;

static inline ::GlobalNamespace::RelativeSfxVolumePerLevelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23732e8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RelativeSfxVolumePerLevelSO(RelativeSfxVolumePerLevelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RelativeSfxVolumePerLevelSO(RelativeSfxVolumePerLevelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RelativeSfxVolumePerLevelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RelativeSfxVolumePerLevelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RelativeSfxVolumePerLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeSfxVolumePerLevelSO*, "", "RelativeSfxVolumePerLevelSO");
NEED_NO_BOX(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, "", "RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair");
NEED_NO_BOX(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, "", "RelativeSfxVolumePerLevelSO/RelativeSfxVolumePerPackPair");
NEED_NO_BOX(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*, "", "RelativeSfxVolumePerLevelSO/RelativeSfxVolumePerPackPair/<>c");
