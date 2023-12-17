#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCaptureCache)
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
struct __ScreenCaptureCache__ScreenshotType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScreenCaptureCache__ScreenshotType;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureCache);
// Type: ::ScreenshotType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15306))
// CS Name: ::ScreenCaptureCache::ScreenshotType
struct CORDL_TYPE __ScreenCaptureCache__ScreenshotType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ScreenCaptureCache__ScreenshotType_Unwrapped
enum struct ____ScreenCaptureCache__ScreenshotType_Unwrapped : int32_t {
__E_Game = static_cast<int32_t>(0x0),
__E_Menu = static_cast<int32_t>(0x1),
__E_Other = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Game value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const Game;

/// @brief Field Menu value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const Menu;

/// @brief Field Other value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const Other;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ScreenCaptureCache__ScreenshotType_Unwrapped () const noexcept {
return std::bit_cast<____ScreenCaptureCache__ScreenshotType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ScreenCaptureCache__ScreenshotType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ScreenCaptureCache__ScreenshotType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ScreenCaptureCache__ScreenshotType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ScreenCaptureCache
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15307))
// CS Name: ::ScreenCaptureCache*
class CORDL_TYPE ScreenCaptureCache : public ::System::Object {
public:
// Declarations
using ScreenshotType = ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _cache offset 0x10
 __declspec(property(get=__get__cache, put=__set__cache)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*  _cache;

constexpr void __set__cache(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>* __get__cache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*> __get__cache() const;

/// @brief Method GetLastScreenshot addr 0x280bbac size 0x78 virtual false final false
inline ::UnityEngine::Texture2D* GetLastScreenshot(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  screenshotType) ;

/// @brief Method StoreScreenshot addr 0x280b868 size 0xac virtual false final false
inline void StoreScreenshot(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  screenshotType, ::UnityEngine::Texture2D*  texture) ;

static inline ::GlobalNamespace::ScreenCaptureCache* New_ctor() ;

/// @brief Method .ctor addr 0x280bc24 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenCaptureCache(ScreenCaptureCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenCaptureCache(ScreenCaptureCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScreenCaptureCache()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureCache, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, "", "ScreenCaptureCache/ScreenshotType");
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureCache*, "", "ScreenCaptureCache");
