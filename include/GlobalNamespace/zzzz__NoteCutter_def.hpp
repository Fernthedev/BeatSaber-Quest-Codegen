#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutter)
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParamsComparer;
}
namespace UnityEngine {
class Collider;
}
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParams;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutter;
}
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParams;
}
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParamsComparer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutter);
MARK_REF_PTR_T(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams);
MARK_REF_PTR_T(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer);
// Type: ::CuttableBySaberSortParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5289))
// CS Name: ::NoteCutter::CuttableBySaberSortParams*
class CORDL_TYPE __NoteCutter__CuttableBySaberSortParams : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field cuttableBySaber offset 0x10
 __declspec(property(get=__get_cuttableBySaber, put=__set_cuttableBySaber)) ::GlobalNamespace::CuttableBySaber*  cuttableBySaber;

/// @brief Field distance offset 0x18
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field pos offset 0x1c
 __declspec(property(get=__get_pos, put=__set_pos)) ::UnityEngine::Vector3  pos;

constexpr void __set_cuttableBySaber(::GlobalNamespace::CuttableBySaber*  value) ;

constexpr ::GlobalNamespace::CuttableBySaber* __get_cuttableBySaber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CuttableBySaber*> __get_cuttableBySaber() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_pos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_pos() ;

constexpr ::UnityEngine::Vector3 const& __get_pos() const;

static inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams* New_ctor() ;

/// @brief Method .ctor addr 0x22631cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NoteCutter__CuttableBySaberSortParams(__NoteCutter__CuttableBySaberSortParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NoteCutter__CuttableBySaberSortParams(__NoteCutter__CuttableBySaberSortParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NoteCutter__CuttableBySaberSortParams()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CuttableBySaberSortParamsComparer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5290))
// CS Name: ::NoteCutter::CuttableBySaberSortParamsComparer*
class CORDL_TYPE __NoteCutter__CuttableBySaberSortParamsComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() noexcept;

/// @brief Method Compare addr 0x22631d4 size 0x124 virtual true final true
inline int32_t Compare(::System::Object*  p0, ::System::Object*  p1) ;

static inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* New_ctor() ;

/// @brief Method .ctor addr 0x22631c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NoteCutter__CuttableBySaberSortParamsComparer(__NoteCutter__CuttableBySaberSortParamsComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NoteCutter__CuttableBySaberSortParamsComparer(__NoteCutter__CuttableBySaberSortParamsComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NoteCutter__CuttableBySaberSortParamsComparer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NoteCutter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5291))
// CS Name: ::NoteCutter*
class CORDL_TYPE NoteCutter : public ::System::Object {
public:
// Declarations
using CuttableBySaberSortParamsComparer = ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer;

using CuttableBySaberSortParams = ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field kMaxNumberOfColliders offset 0x0
static constexpr int32_t  kMaxNumberOfColliders{static_cast<int32_t>(0x10)};

/// @brief Field _colliders offset 0x10
 __declspec(property(get=__get__colliders, put=__set__colliders)) ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  _colliders;

/// @brief Field _cuttableBySaberSortParams offset 0x18
 __declspec(property(get=__get__cuttableBySaberSortParams, put=__set__cuttableBySaberSortParams)) ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*,::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>  _cuttableBySaberSortParams;

/// @brief Field _comparer offset 0x20
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*  _comparer;

constexpr void __set__colliders(::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>& __get__colliders() ;

constexpr ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*> const& __get__colliders() const;

constexpr void __set__cuttableBySaberSortParams(::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*,::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*,::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>& __get__cuttableBySaberSortParams() ;

constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*,::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> const& __get__cuttableBySaberSortParams() const;

constexpr void __set__comparer(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*  value) ;

constexpr ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*> __get__comparer() const;

static inline ::GlobalNamespace::NoteCutter* New_ctor() ;

/// @brief Method .ctor addr 0x226308c size 0x138 virtual false final false
inline void _ctor() ;

/// @brief Method Cut addr 0x2262a5c size 0x524 virtual false final false
inline void Cut(::GlobalNamespace::Saber*  saber) ;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteCutter(NoteCutter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteCutter(NoteCutter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteCutter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutter, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutter*, "", "NoteCutter");
NEED_NO_BOX(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, "", "NoteCutter/CuttableBySaberSortParams");
NEED_NO_BOX(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*, "", "NoteCutter/CuttableBySaberSortParamsComparer");
