#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainUtility)
namespace UnityEngine::TerrainUtils {
class __TerrainUtility____c__DisplayClass2_1;
}
namespace UnityEngine::TerrainUtils {
class __TerrainUtility____c__DisplayClass2_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TerrainUtils {
class TerrainMap;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine::TerrainUtils {
class TerrainUtility;
}
namespace UnityEngine::TerrainUtils {
class __TerrainUtility____c__DisplayClass2_0;
}
namespace UnityEngine::TerrainUtils {
class __TerrainUtility____c__DisplayClass2_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainUtility);
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0);
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1);
// Type: ::<>c__DisplayClass2_0
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15480))
// CS Name: ::TerrainUtility::<>c__DisplayClass2_0*
class CORDL_TYPE __TerrainUtility____c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field onlyAutoConnectedTerrains offset 0x10
 __declspec(property(get=__get_onlyAutoConnectedTerrains, put=__set_onlyAutoConnectedTerrains)) bool  onlyAutoConnectedTerrains;

constexpr void __set_onlyAutoConnectedTerrains(bool  value) ;

constexpr bool& __get_onlyAutoConnectedTerrains() ;

constexpr bool const& __get_onlyAutoConnectedTerrains() const;

static inline ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0* New_ctor() ;

/// @brief Method .ctor addr 0x2d1ffd0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TerrainUtility____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TerrainUtility____c__DisplayClass2_0(__TerrainUtility____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TerrainUtility____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TerrainUtility____c__DisplayClass2_0(__TerrainUtility____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TerrainUtility____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::TerrainUtils
// Type: ::<>c__DisplayClass2_1
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15481))
// CS Name: ::TerrainUtility::<>c__DisplayClass2_1*
class CORDL_TYPE __TerrainUtility____c__DisplayClass2_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field t offset 0x10
 __declspec(property(get=__get_t, put=__set_t)) ::UnityEngine::Terrain*  t;

/// @brief Field CS$<>8__locals1 offset 0x18
 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1)) ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*  CS$__8__locals1;

constexpr void __set_t(::UnityEngine::Terrain*  value) ;

constexpr ::UnityEngine::Terrain* __get_t() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> __get_t() const;

constexpr void __set_CS$__8__locals1(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*  value) ;

constexpr ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0* __get_CS$__8__locals1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*> __get_CS$__8__locals1() const;

static inline ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1* New_ctor() ;

/// @brief Method .ctor addr 0x2d1ffd8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CollectTerrains>b__0 addr 0x2d20368 size 0xdc virtual false final false
inline bool _CollectTerrains_b__0(::UnityEngine::Terrain*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__TerrainUtility____c__DisplayClass2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TerrainUtility____c__DisplayClass2_1(__TerrainUtility____c__DisplayClass2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TerrainUtility____c__DisplayClass2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TerrainUtility____c__DisplayClass2_1(__TerrainUtility____c__DisplayClass2_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TerrainUtility____c__DisplayClass2_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::TerrainUtils
// Type: UnityEngine.TerrainUtils::TerrainUtility
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15482))
// CS Name: ::UnityEngine.TerrainUtils::TerrainUtility*
class CORDL_TYPE TerrainUtility : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_1 = ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1;

using __c__DisplayClass2_0 = ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ValidTerrainsExist addr 0x2d1fb4c size 0x68 virtual false final false
static inline bool ValidTerrainsExist() ;

/// @brief Method ClearConnectivity addr 0x2d1fbb4 size 0xf8 virtual false final false
static inline void ClearConnectivity() ;

/// @brief Method CollectTerrains addr 0x2d1fcac size 0x324 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TerrainUtils::TerrainMap*>* CollectTerrains(bool  onlyAutoConnectedTerrains) ;

/// @brief Method AutoConnect addr 0x2d1ffe0 size 0x388 virtual false final false
static inline void AutoConnect() ;

// Ctor Parameters [CppParam { name: "", ty: "TerrainUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainUtility(TerrainUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainUtility(TerrainUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TerrainUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TerrainUtils
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainUtility*, "UnityEngine.TerrainUtils", "TerrainUtility");
NEED_NO_BOX(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*, "UnityEngine.TerrainUtils", "TerrainUtility/<>c__DisplayClass2_0");
NEED_NO_BOX(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1*, "UnityEngine.TerrainUtils", "TerrainUtility/<>c__DisplayClass2_1");
