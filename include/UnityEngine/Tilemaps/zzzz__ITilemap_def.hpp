#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITilemap)
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class ITilemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::ITilemap);
// Type: UnityEngine.Tilemaps::ITilemap
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15948))
// CS Name: ::UnityEngine.Tilemaps::ITilemap*
class CORDL_TYPE ITilemap : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_Tilemap offset 0x10
 __declspec(property(get=__get_m_Tilemap, put=__set_m_Tilemap)) ::UnityEngine::Tilemaps::Tilemap*  m_Tilemap;

/// @brief Field m_AddToList offset 0x18
 __declspec(property(get=__get_m_AddToList, put=__set_m_AddToList)) bool  m_AddToList;

/// @brief Field m_RefreshCount offset 0x1c
 __declspec(property(get=__get_m_RefreshCount, put=__set_m_RefreshCount)) int32_t  m_RefreshCount;

/// @brief Field m_RefreshPos offset 0x20
 __declspec(property(get=__get_m_RefreshPos, put=__set_m_RefreshPos)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  m_RefreshPos;

static inline void setStaticF_s_Instance(::UnityEngine::Tilemaps::ITilemap*  value) ;

static inline ::UnityEngine::Tilemaps::ITilemap* getStaticF_s_Instance() ;

constexpr void __set_m_Tilemap(::UnityEngine::Tilemaps::Tilemap*  value) ;

constexpr ::UnityEngine::Tilemaps::Tilemap* __get_m_Tilemap() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> __get_m_Tilemap() const;

constexpr void __set_m_AddToList(bool  value) ;

constexpr bool& __get_m_AddToList() ;

constexpr bool const& __get_m_AddToList() const;

constexpr void __set_m_RefreshCount(int32_t  value) ;

constexpr int32_t& __get_m_RefreshCount() ;

constexpr int32_t const& __get_m_RefreshCount() const;

constexpr void __set_m_RefreshPos(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>& __get_m_RefreshPos() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> const& __get_m_RefreshPos() const;

static inline ::UnityEngine::Tilemaps::ITilemap* New_ctor() ;

/// @brief Method .ctor addr 0x2d508b0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method RefreshTile addr 0x2d5066c size 0x164 virtual false final false
inline void RefreshTile(::UnityEngine::Vector3Int  position) ;

/// @brief Method CreateInstance addr 0x2d508b8 size 0x70 virtual false final false
static inline ::UnityEngine::Tilemaps::ITilemap* CreateInstance() ;

/// @brief Method FindAllRefreshPositions addr 0x2d50928 size 0x318 virtual false final false
static inline void FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap*  tilemap, int32_t  count, ::cordl_internals::intptr_t  oldTilesIntPtr, ::cordl_internals::intptr_t  newTilesIntPtr, ::cordl_internals::intptr_t  positionsIntPtr) ;

/// @brief Method GetAllTileData addr 0x2d50c40 size 0x1f8 virtual false final false
static inline void GetAllTileData(::UnityEngine::Tilemaps::ITilemap*  tilemap, int32_t  count, ::cordl_internals::intptr_t  tilesIntPtr, ::cordl_internals::intptr_t  positionsIntPtr, ::cordl_internals::intptr_t  outTileDataIntPtr) ;

// Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ITilemap(ITilemap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITilemap(ITilemap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ITilemap()  = default;
public:


// Fields

// Static field s_Instance


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::ITilemap, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::ITilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::ITilemap*, "UnityEngine.Tilemaps", "ITilemap");
