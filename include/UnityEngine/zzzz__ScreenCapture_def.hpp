#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCapture)
namespace UnityEngine {
struct __ScreenCapture__StereoScreenCaptureMode;
}
// Forward declare root types
namespace UnityEngine {
struct __ScreenCapture__StereoScreenCaptureMode;
}
namespace UnityEngine {
class ScreenCapture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ScreenCapture__StereoScreenCaptureMode);
MARK_REF_PTR_T(::UnityEngine::ScreenCapture);
// Type: ::StereoScreenCaptureMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16186))
// CS Name: ::ScreenCapture::StereoScreenCaptureMode
struct CORDL_TYPE __ScreenCapture__StereoScreenCaptureMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ScreenCapture__StereoScreenCaptureMode_Unwrapped
enum struct ____ScreenCapture__StereoScreenCaptureMode_Unwrapped : int32_t {
__E_LeftEye = static_cast<int32_t>(0x1),
__E_RightEye = static_cast<int32_t>(0x2),
__E_BothEyes = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LeftEye value: static_cast<int32_t>(0x1)
static ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode const LeftEye;

/// @brief Field RightEye value: static_cast<int32_t>(0x2)
static ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode const RightEye;

/// @brief Field BothEyes value: static_cast<int32_t>(0x3)
static ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode const BothEyes;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ScreenCapture__StereoScreenCaptureMode_Unwrapped () const noexcept {
return std::bit_cast<____ScreenCapture__StereoScreenCaptureMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ScreenCapture__StereoScreenCaptureMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ScreenCapture__StereoScreenCaptureMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ScreenCapture__StereoScreenCaptureMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ScreenCapture__StereoScreenCaptureMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::ScreenCapture
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16187))
// CS Name: ::UnityEngine::ScreenCapture*
class CORDL_TYPE ScreenCapture : public ::System::Object {
public:
// Declarations
using StereoScreenCaptureMode = ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CaptureScreenshot addr 0x2d17f3c size 0x44 virtual false final false
static inline void CaptureScreenshot(::StringW  filename) ;

/// @brief Method CaptureScreenshot addr 0x2d17fd4 size 0x48 virtual false final false
static inline void CaptureScreenshot(::StringW  filename, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  stereoCaptureMode) ;

/// @brief Method CaptureScreenshot addr 0x2d17f80 size 0x54 virtual false final false
static inline void CaptureScreenshot(::StringW  filename, int32_t  superSize, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  CaptureMode) ;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenCapture(ScreenCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenCapture(ScreenCapture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScreenCapture()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScreenCapture, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ScreenCapture__StereoScreenCaptureMode, "UnityEngine", "ScreenCapture/StereoScreenCaptureMode");
NEED_NO_BOX(::UnityEngine::ScreenCapture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenCapture*, "UnityEngine", "ScreenCapture");
