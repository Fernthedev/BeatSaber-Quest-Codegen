#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathsHolder)
namespace GlobalNamespace {
class VertexPath;
}
namespace GlobalNamespace {
class BezierPath;
}
// Forward declare root types
namespace GlobalNamespace {
class PathsHolder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PathsHolder);
// Type: ::PathsHolder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5972))
// CS Name: ::PathsHolder*
class CORDL_TYPE PathsHolder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _bezierPath offset 0x10
 __declspec(property(get=__get__bezierPath, put=__set__bezierPath)) ::GlobalNamespace::BezierPath*  _bezierPath;

/// @brief Field _vertexPath offset 0x18
 __declspec(property(get=__get__vertexPath, put=__set__vertexPath)) ::GlobalNamespace::VertexPath*  _vertexPath;

 __declspec(property(get=get_bezierPath)) ::GlobalNamespace::BezierPath*  bezierPath;

 __declspec(property(get=get_vertexPath)) ::GlobalNamespace::VertexPath*  vertexPath;

constexpr void __set__bezierPath(::GlobalNamespace::BezierPath*  value) ;

constexpr ::GlobalNamespace::BezierPath* __get__bezierPath() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierPath*> __get__bezierPath() const;

constexpr void __set__vertexPath(::GlobalNamespace::VertexPath*  value) ;

constexpr ::GlobalNamespace::VertexPath* __get__vertexPath() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VertexPath*> __get__vertexPath() const;

/// @brief Method get_bezierPath addr 0x230be58 size 0x8 virtual false final false
inline ::GlobalNamespace::BezierPath* get_bezierPath() ;

/// @brief Method get_vertexPath addr 0x230be60 size 0x8 virtual false final false
inline ::GlobalNamespace::VertexPath* get_vertexPath() ;

static inline ::GlobalNamespace::PathsHolder* New_ctor(int32_t  numberOfFixedVertexPathSegments, bool  updateVertexPath) ;

/// @brief Method .ctor addr 0x230be68 size 0x124 virtual false final false
inline void _ctor(int32_t  numberOfFixedVertexPathSegments, bool  updateVertexPath) ;

/// @brief Method UpdateVertexPathByBezierPath addr 0x230c4dc size 0x20 virtual false final false
inline void UpdateVertexPathByBezierPath() ;

// Ctor Parameters [CppParam { name: "", ty: "PathsHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PathsHolder(PathsHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathsHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathsHolder(PathsHolder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PathsHolder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PathsHolder, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PathsHolder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PathsHolder*, "", "PathsHolder");
