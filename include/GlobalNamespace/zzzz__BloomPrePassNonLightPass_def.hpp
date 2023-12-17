#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassNonLightPass)
namespace GlobalNamespace {
struct __BloomPrePassNonLightPass__ExecutionTimeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BloomPrePassNonLightPass__ExecutionTimeType;
}
namespace GlobalNamespace {
class BloomPrePassNonLightPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassNonLightPass);
// Type: ::ExecutionTimeType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14477))
// CS Name: ::BloomPrePassNonLightPass::ExecutionTimeType
struct CORDL_TYPE __BloomPrePassNonLightPass__ExecutionTimeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped
enum struct ____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BeforeBlur = static_cast<int32_t>(0x1),
__E_AfterBlur = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const None;

/// @brief Field BeforeBlur value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const BeforeBlur;

/// @brief Field AfterBlur value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const AfterBlur;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped () const noexcept {
return std::bit_cast<____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BloomPrePassNonLightPass__ExecutionTimeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BloomPrePassNonLightPass__ExecutionTimeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BloomPrePassNonLightPass__ExecutionTimeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BloomPrePassNonLightPass
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14478))
// CS Name: ::BloomPrePassNonLightPass*
class CORDL_TYPE BloomPrePassNonLightPass : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ExecutionTimeType = ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _executionTimeType offset 0x18
 __declspec(property(get=__get__executionTimeType, put=__set__executionTimeType)) ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType  _executionTimeType;

/// @brief Field _registeredExecutionTimeType offset 0x1c
 __declspec(property(get=__get__registeredExecutionTimeType, put=__set__registeredExecutionTimeType)) ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType  _registeredExecutionTimeType;

 __declspec(property(get=get_executionTimeType)) ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType  executionTimeType;

constexpr void __set__executionTimeType(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType  value) ;

constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType& __get__executionTimeType() ;

constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const& __get__executionTimeType() const;

static inline void setStaticF__bloomPrePassAfterBlurList(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>*  value) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* getStaticF__bloomPrePassAfterBlurList() ;

static inline void setStaticF__bloomPrePassBeforeBlurList(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>*  value) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* getStaticF__bloomPrePassBeforeBlurList() ;

constexpr void __set__registeredExecutionTimeType(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType  value) ;

constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType& __get__registeredExecutionTimeType() ;

constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const& __get__registeredExecutionTimeType() const;

/// @brief Method get_executionTimeType addr 0x2107188 size 0x8 virtual false final false
inline ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType get_executionTimeType() ;

/// @brief Method get_bloomPrePassAfterBlurList addr 0x2107190 size 0x58 virtual false final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassAfterBlurList() ;

/// @brief Method get_bloomPrePassBeforeBlurList addr 0x21071e8 size 0x58 virtual false final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassBeforeBlurList() ;

/// @brief Method OnEnable addr 0x2105a84 size 0x4 virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2107240 size 0x4 virtual true final false
inline void OnDisable() ;

/// @brief Method Register addr 0x2105918 size 0x124 virtual false final false
inline void Register() ;

/// @brief Method Unregister addr 0x210585c size 0xbc virtual false final false
inline void Unregister() ;

/// @brief Method OnValidate addr 0x21065ec size 0x2c virtual true final false
inline void OnValidate() ;

/// @brief Method Render addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Render(::UnityEngine::RenderTexture*  dest, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix) ;

static inline ::GlobalNamespace::BloomPrePassNonLightPass* New_ctor() ;

/// @brief Method .ctor addr 0x2104130 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassNonLightPass(BloomPrePassNonLightPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassNonLightPass(BloomPrePassNonLightPass const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassNonLightPass()  = default;
public:


// Fields

// Static field _bloomPrePassAfterBlurList

// Static field _bloomPrePassBeforeBlurList


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassNonLightPass, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType, "", "BloomPrePassNonLightPass/ExecutionTimeType");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassNonLightPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassNonLightPass*, "", "BloomPrePassNonLightPass");
