#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidDeviceCapabilities)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
class __AndroidDeviceCapabilities____c;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidInputSource;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class __AndroidDeviceCapabilities____c;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidDeviceCapabilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities);
// Type: ::<>c
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6451))
// CS Name: ::AndroidDeviceCapabilities::<>c*
class CORDL_TYPE __AndroidDeviceCapabilities____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c*  value) ;

static inline ::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c* getStaticF___9() ;

static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::StringW>* getStaticF___9__8_0() ;

static inline ::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c* New_ctor() ;

/// @brief Method .ctor addr 0x2ae6ba4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ToString>b__8_0 addr 0x2ae6bac size 0x64 virtual false final false
inline ::StringW _ToString_b__8_0(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis  i) ;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidDeviceCapabilities____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AndroidDeviceCapabilities____c(__AndroidDeviceCapabilities____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidDeviceCapabilities____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AndroidDeviceCapabilities____c(__AndroidDeviceCapabilities____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AndroidDeviceCapabilities____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidDeviceCapabilities
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6452))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidDeviceCapabilities
struct CORDL_TYPE AndroidDeviceCapabilities : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field deviceDescriptor offset 0x0
 __declspec(property(get=__get_deviceDescriptor, put=__set_deviceDescriptor)) ::StringW  deviceDescriptor;

/// @brief Field productId offset 0x8
 __declspec(property(get=__get_productId, put=__set_productId)) int32_t  productId;

/// @brief Field vendorId offset 0xc
 __declspec(property(get=__get_vendorId, put=__set_vendorId)) int32_t  vendorId;

/// @brief Field isVirtual offset 0x10
 __declspec(property(get=__get_isVirtual, put=__set_isVirtual)) bool  isVirtual;

/// @brief Field motionAxes offset 0x18
 __declspec(property(get=__get_motionAxes, put=__set_motionAxes)) ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>  motionAxes;

/// @brief Field inputSources offset 0x20
 __declspec(property(get=__get_inputSources, put=__set_inputSources)) ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  inputSources;

constexpr void __set_deviceDescriptor(::StringW  value) ;

constexpr ::StringW& __get_deviceDescriptor() ;

constexpr ::StringW const& __get_deviceDescriptor() const;

constexpr void __set_productId(int32_t  value) ;

constexpr int32_t& __get_productId() ;

constexpr int32_t const& __get_productId() const;

constexpr void __set_vendorId(int32_t  value) ;

constexpr int32_t& __get_vendorId() ;

constexpr int32_t const& __get_vendorId() const;

constexpr void __set_isVirtual(bool  value) ;

constexpr bool& __get_isVirtual() ;

constexpr bool const& __get_isVirtual() const;

constexpr void __set_motionAxes(::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>& __get_motionAxes() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*> const& __get_motionAxes() const;

constexpr void __set_inputSources(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  value) ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource& __get_inputSources() ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const& __get_inputSources() const;

/// @brief Method ToJson addr 0x2ae6764 size 0x6c virtual false final false
inline ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2ae6570 size 0xc0 virtual false final false
static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities FromJson(::StringW  json) ;

/// @brief Method ToString addr 0x2ae67d0 size 0x370 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "deviceDescriptor", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isVirtual", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "motionAxes", ty: "::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>", modifiers: "", def_value: None }, CppParam { name: "inputSources", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource", modifiers: "", def_value: None }]
constexpr AndroidDeviceCapabilities(::StringW  deviceDescriptor, int32_t  productId, int32_t  vendorId, bool  isVirtual, ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::Array<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>*>  motionAxes, ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  inputSources) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidDeviceCapabilities(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidDeviceCapabilities()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidDeviceCapabilities____c*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities");
