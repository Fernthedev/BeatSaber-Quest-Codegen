#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshPath)
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshPath;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AI::NavMeshPath);
// Type: UnityEngine.AI::NavMeshPath
namespace UnityEngine::AI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16115))
// CS Name: ::UnityEngine.AI::NavMeshPath*
class CORDL_TYPE NavMeshPath : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_Corners offset 0x18
 __declspec(property(get=__get_m_Corners, put=__set_m_Corners)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  m_Corners;

 __declspec(property(get=get_corners)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  corners;

 __declspec(property(get=get_status)) ::UnityEngine::AI::NavMeshPathStatus  status;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_Corners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_m_Corners() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_m_Corners() const;

static inline ::UnityEngine::AI::NavMeshPath* New_ctor() ;

/// @brief Method .ctor addr 0x2c7d5b0 size 0x48 virtual false final false
inline void _ctor() ;

/// @brief Method Finalize addr 0x2c7d620 size 0xf4 virtual true final false
inline void Finalize() ;

/// @brief Method InitializeNavMeshPath addr 0x2c7d5f8 size 0x28 virtual false final false
static inline ::cordl_internals::intptr_t InitializeNavMeshPath() ;

/// @brief Method DestroyNavMeshPath addr 0x2c7d714 size 0x3c virtual false final false
static inline void DestroyNavMeshPath(::cordl_internals::intptr_t  ptr) ;

/// @brief Method CalculateCornersInternal addr 0x2c7d750 size 0x3c virtual false final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> CalculateCornersInternal() ;

/// @brief Method ClearCornersInternal addr 0x2c7d78c size 0x3c virtual false final false
inline void ClearCornersInternal() ;

/// @brief Method ClearCorners addr 0x2c7d7c8 size 0x44 virtual false final false
inline void ClearCorners() ;

/// @brief Method CalculateCorners addr 0x2c7d80c size 0x4c virtual false final false
inline void CalculateCorners() ;

/// @brief Method get_corners addr 0x2c7d858 size 0x4c virtual false final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> get_corners() ;

/// @brief Method get_status addr 0x2c7d8a4 size 0x3c virtual false final false
inline ::UnityEngine::AI::NavMeshPathStatus get_status() ;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshPath(NavMeshPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshPath(NavMeshPath const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NavMeshPath()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMeshPath, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::AI
NEED_NO_BOX(::UnityEngine::AI::NavMeshPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshPath*, "UnityEngine.AI", "NavMeshPath");
