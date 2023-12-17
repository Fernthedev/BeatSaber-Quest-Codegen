#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StretchableCube)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class StretchableCube;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StretchableCube);
// Type: ::StretchableCube
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4797))
// CS Name: ::StretchableCube*
class CORDL_TYPE StretchableCube : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kLength offset 0x0
static constexpr float_t  kLength{1.0};

/// @brief Field kWidth offset 0x0
static constexpr float_t  kWidth{1.0};

/// @brief Field kHeight offset 0x0
static constexpr float_t  kHeight{1.0};

/// @brief Field _uvs offset 0x18
 __declspec(property(get=__get__uvs, put=__set__uvs)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uvs;

/// @brief Field _mesh offset 0x20
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

static inline void setStaticF_p0(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p0() ;

static inline void setStaticF_p1(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p1() ;

static inline void setStaticF_p2(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p2() ;

static inline void setStaticF_p3(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p3() ;

static inline void setStaticF_p4(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p4() ;

static inline void setStaticF_p5(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p5() ;

static inline void setStaticF_p6(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p6() ;

static inline void setStaticF_p7(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_p7() ;

static inline void setStaticF_vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> getStaticF_vertices() ;

static inline void setStaticF_up(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_up() ;

static inline void setStaticF_down(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_down() ;

static inline void setStaticF_front(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_front() ;

static inline void setStaticF_back(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_back() ;

static inline void setStaticF_left(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_left() ;

static inline void setStaticF_right(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_right() ;

static inline void setStaticF_normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> getStaticF_normals() ;

static inline void setStaticF_triangles(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_triangles() ;

constexpr void __set__uvs(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __get__uvs() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __get__uvs() const;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

/// @brief Method Awake addr 0x238eb88 size 0x70 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x238ed3c size 0xc virtual false final false
inline void OnDestroy() ;

/// @brief Method CreateBox addr 0x238ebf8 size 0x144 virtual false final false
inline ::UnityEngine::Mesh* CreateBox() ;

/// @brief Method RecalculateUVs addr 0x238ed48 size 0x1e4 virtual false final false
inline void RecalculateUVs(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs) ;

/// @brief Method RefreshUVs addr 0x238ef2c size 0x94 virtual false final false
inline void RefreshUVs() ;

static inline ::GlobalNamespace::StretchableCube* New_ctor() ;

/// @brief Method .ctor addr 0x238efc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StretchableCube", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StretchableCube(StretchableCube && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StretchableCube", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StretchableCube(StretchableCube const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StretchableCube()  = default;
public:


// Fields

// Static field p0

// Static field p1

// Static field p2

// Static field p3

// Static field p4

// Static field p5

// Static field p6

// Static field p7

// Static field vertices

// Static field up

// Static field down

// Static field front

// Static field back

// Static field left

// Static field right

// Static field normals

// Static field triangles


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StretchableCube, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StretchableCube);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StretchableCube*, "", "StretchableCube");
