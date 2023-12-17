#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Poser_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GenericPoser)
namespace RootMotion::FinalIK {
class __GenericPoser__Map;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GenericPoser;
}
namespace RootMotion::FinalIK {
class __GenericPoser__Map;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GenericPoser);
MARK_REF_PTR_T(::RootMotion::FinalIK::__GenericPoser__Map);
// Type: ::Map
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12614))
// CS Name: ::GenericPoser::Map*
class CORDL_TYPE __GenericPoser__Map : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field bone offset 0x10
 __declspec(property(get=__get_bone, put=__set_bone)) ::UnityEngine::Transform*  bone;

/// @brief Field target offset 0x18
 __declspec(property(get=__get_target, put=__set_target)) ::UnityEngine::Transform*  target;

/// @brief Field defaultLocalPosition offset 0x20
 __declspec(property(get=__get_defaultLocalPosition, put=__set_defaultLocalPosition)) ::UnityEngine::Vector3  defaultLocalPosition;

/// @brief Field defaultLocalRotation offset 0x2c
 __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation)) ::UnityEngine::Quaternion  defaultLocalRotation;

constexpr void __set_bone(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone() const;

constexpr void __set_target(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_target() const;

constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_defaultLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_defaultLocalPosition() const;

constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

static inline ::RootMotion::FinalIK::__GenericPoser__Map* New_ctor(::UnityEngine::Transform*  bone, ::UnityEngine::Transform*  target) ;

/// @brief Method .ctor addr 0x128ca54 size 0x30 virtual false final false
inline void _ctor(::UnityEngine::Transform*  bone, ::UnityEngine::Transform*  target) ;

/// @brief Method StoreDefaultState addr 0x128cd90 size 0x44 virtual false final false
inline void StoreDefaultState() ;

/// @brief Method FixTransform addr 0x128cd50 size 0x40 virtual false final false
inline void FixTransform() ;

/// @brief Method Update addr 0x128cbd4 size 0x120 virtual false final false
inline void Update(float_t  localRotationWeight, float_t  localPositionWeight) ;

// Ctor Parameters [CppParam { name: "", ty: "__GenericPoser__Map", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GenericPoser__Map(__GenericPoser__Map && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GenericPoser__Map", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GenericPoser__Map(__GenericPoser__Map const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GenericPoser__Map()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__GenericPoser__Map, 0x40>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::GenericPoser
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12615))
// CS Name: ::RootMotion.FinalIK::GenericPoser*
class CORDL_TYPE GenericPoser : public ::RootMotion::FinalIK::Poser {
public:
// Declarations
using Map = ::RootMotion::FinalIK::__GenericPoser__Map;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::RootMotion::FinalIK::Poser)]{};

/// @brief Field maps offset 0x50
 __declspec(property(get=__get_maps, put=__set_maps)) ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*,::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*>  maps;

constexpr void __set_maps(::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*,::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*,::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*>& __get_maps() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*,::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> const& __get_maps() const;

/// @brief Method AutoMapping addr 0x128c768 size 0x258 virtual true final false
inline void AutoMapping() ;

/// @brief Method InitiatePoser addr 0x128cae0 size 0x4 virtual true final false
inline void InitiatePoser() ;

/// @brief Method UpdatePoser addr 0x128cae4 size 0xf0 virtual true final false
inline void UpdatePoser() ;

/// @brief Method FixPoserTransforms addr 0x128ccf4 size 0x5c virtual true final false
inline void FixPoserTransforms() ;

/// @brief Method StoreDefaultState addr 0x128ca84 size 0x5c virtual false final false
inline void StoreDefaultState() ;

/// @brief Method GetTargetNamed addr 0x128c9c0 size 0x94 virtual false final false
inline ::UnityEngine::Transform* GetTargetNamed(::StringW  tName, ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  array) ;

static inline ::RootMotion::FinalIK::GenericPoser* New_ctor() ;

/// @brief Method .ctor addr 0x128cdd4 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPoser(GenericPoser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPoser(GenericPoser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericPoser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GenericPoser, 0x58>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GenericPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GenericPoser*, "RootMotion.FinalIK", "GenericPoser");
NEED_NO_BOX(::RootMotion::FinalIK::__GenericPoser__Map);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__GenericPoser__Map*, "RootMotion.FinalIK", "GenericPoser/Map");
