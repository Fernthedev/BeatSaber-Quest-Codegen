#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomFogEnvironment)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironment;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogEnvironment);
// Type: ::BloomFogEnvironment
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14449))
// CS Name: ::BloomFogEnvironment*
class CORDL_TYPE BloomFogEnvironment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _bloomFog offset 0x18
 __declspec(property(get=__get__bloomFog, put=__set__bloomFog)) ::GlobalNamespace::BloomFogSO*  _bloomFog;

/// @brief Field _fogParams offset 0x20
 __declspec(property(get=__get__fogParams, put=__set__fogParams)) ::GlobalNamespace::BloomFogEnvironmentParams*  _fogParams;

 __declspec(property(get=get_fogParams)) ::GlobalNamespace::BloomFogEnvironmentParams*  fogParams;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO*  value) ;

constexpr ::GlobalNamespace::BloomFogSO* __get__bloomFog() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> __get__bloomFog() const;

constexpr void __set__fogParams(::GlobalNamespace::BloomFogEnvironmentParams*  value) ;

constexpr ::GlobalNamespace::BloomFogEnvironmentParams* __get__fogParams() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> __get__fogParams() const;

/// @brief Method get_fogParams addr 0x2101e74 size 0x8 virtual false final false
inline ::GlobalNamespace::BloomFogEnvironmentParams* get_fogParams() ;

/// @brief Method OnEnable addr 0x2101e7c size 0x40 virtual false final false
inline void OnEnable() ;

/// @brief Method OnValidate addr 0x2101edc size 0x60 virtual false final false
inline void OnValidate() ;

static inline ::GlobalNamespace::BloomFogEnvironment* New_ctor() ;

/// @brief Method .ctor addr 0x210215c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomFogEnvironment(BloomFogEnvironment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomFogEnvironment(BloomFogEnvironment const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomFogEnvironment()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogEnvironment, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
