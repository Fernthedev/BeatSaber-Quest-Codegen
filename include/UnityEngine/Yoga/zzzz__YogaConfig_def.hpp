#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaConfig)
namespace UnityEngine::Yoga {
class Logger;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::YogaConfig);
// Type: UnityEngine.Yoga::YogaConfig
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15362))
// CS Name: ::UnityEngine.Yoga::YogaConfig*
class CORDL_TYPE YogaConfig : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _ygConfig offset 0x10
 __declspec(property(get=__get__ygConfig, put=__set__ygConfig)) ::cordl_internals::intptr_t  _ygConfig;

/// @brief Field _logger offset 0x18
 __declspec(property(get=__get__logger, put=__set__logger)) ::UnityEngine::Yoga::Logger*  _logger;

 __declspec(property(get=get_Handle)) ::cordl_internals::intptr_t  Handle;

 __declspec(property(get=get_UseWebDefaults, put=set_UseWebDefaults)) bool  UseWebDefaults;

 __declspec(property(put=set_PointScaleFactor)) float_t  PointScaleFactor;

static inline void setStaticF_Default(::UnityEngine::Yoga::YogaConfig*  value) ;

static inline ::UnityEngine::Yoga::YogaConfig* getStaticF_Default() ;

constexpr void __set__ygConfig(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__ygConfig() ;

constexpr ::cordl_internals::intptr_t const& __get__ygConfig() const;

constexpr void __set__logger(::UnityEngine::Yoga::Logger*  value) ;

constexpr ::UnityEngine::Yoga::Logger* __get__logger() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::Logger*> __get__logger() const;

static inline ::UnityEngine::Yoga::YogaConfig* New_ctor(::cordl_internals::intptr_t  ygConfig) ;

/// @brief Method .ctor addr 0x2ea4e18 size 0xc4 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  ygConfig) ;

static inline ::UnityEngine::Yoga::YogaConfig* New_ctor() ;

/// @brief Method .ctor addr 0x2ea4edc size 0x44 virtual false final false
inline void _ctor() ;

/// @brief Method Finalize addr 0x2ea4f20 size 0x108 virtual true final false
inline void Finalize() ;

/// @brief Method get_Handle addr 0x2ea2a5c size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_Handle() ;

/// @brief Method get_UseWebDefaults addr 0x2ea5028 size 0x3c virtual false final false
inline bool get_UseWebDefaults() ;

/// @brief Method set_UseWebDefaults addr 0x2ea5064 size 0x44 virtual false final false
inline void set_UseWebDefaults(bool  value) ;

/// @brief Method set_PointScaleFactor addr 0x2ea50a8 size 0x4c virtual false final false
inline void set_PointScaleFactor(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
YogaConfig(YogaConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
YogaConfig(YogaConfig const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 YogaConfig()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaConfig, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConfig*, "UnityEngine.Yoga", "YogaConfig");
