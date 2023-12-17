#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPlatformAchievementsHandler)
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__UnlockAchievementResult;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__UnlockAchievementResult;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult);
MARK_VAL_T(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult);
MARK_REF_PTR_T(::GlobalNamespace::IPlatformAchievementsHandler);
MARK_REF_PTR_T(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler);
// Type: ::UnlockAchievementResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4092))
// CS Name: ::IPlatformAchievementsHandler::UnlockAchievementResult
struct CORDL_TYPE __IPlatformAchievementsHandler__UnlockAchievementResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped
enum struct ____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult const OK;

/// @brief Field Failed value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped () const noexcept {
return std::bit_cast<____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __IPlatformAchievementsHandler__UnlockAchievementResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IPlatformAchievementsHandler__UnlockAchievementResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IPlatformAchievementsHandler__UnlockAchievementResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GetUnlockedAchievementsResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4093))
// CS Name: ::IPlatformAchievementsHandler::GetUnlockedAchievementsResult
struct CORDL_TYPE __IPlatformAchievementsHandler__GetUnlockedAchievementsResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped
enum struct ____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const OK;

/// @brief Field Failed value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped () const noexcept {
return std::bit_cast<____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __IPlatformAchievementsHandler__GetUnlockedAchievementsResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IPlatformAchievementsHandler__GetUnlockedAchievementsResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IPlatformAchievementsHandler__GetUnlockedAchievementsResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::UnlockAchievementCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4094))
// CS Name: ::IPlatformAchievementsHandler::UnlockAchievementCompletionHandler*
class CORDL_TYPE __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2232fb0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2233370 size 0x14 virtual true final false
inline void Invoke(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult  result) ;

/// @brief Method BeginInvoke addr 0x2233384 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x2233408 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GetUnlockedAchievementsCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4095))
// CS Name: ::IPlatformAchievementsHandler::GetUnlockedAchievementsCompletionHandler*
class CORDL_TYPE __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2232ee4 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2233414 size 0x14 virtual true final false
inline void Invoke(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult  result, ::ArrayW<::StringW,::Array<::StringW>*>  unlockedAchievementsIds) ;

/// @brief Method BeginInvoke addr 0x2233428 size 0x90 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult  result, ::ArrayW<::StringW,::Array<::StringW>*>  unlockedAchievementsIds, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x22334b8 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::IPlatformAchievementsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4096))
// CS Name: ::IPlatformAchievementsHandler*
class CORDL_TYPE IPlatformAchievementsHandler {
public:
// Declarations
using GetUnlockedAchievementsCompletionHandler = ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;

using UnlockAchievementCompletionHandler = ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;

using GetUnlockedAchievementsResult = ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult;

using UnlockAchievementResult = ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Initialize() ;

/// @brief Method UnlockAchievement addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW  achievementId, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*  completionHandler) ;

/// @brief Method GetUnlockedAchievements addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*  completionHandler) ;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPlatformAchievementsHandler(IPlatformAchievementsHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlatformAchievementsHandler(IPlatformAchievementsHandler const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult, "", "IPlatformAchievementsHandler/UnlockAchievementResult");
NEED_NO_BOX(::GlobalNamespace::IPlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler*, "", "IPlatformAchievementsHandler");
NEED_NO_BOX(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*, "", "IPlatformAchievementsHandler/UnlockAchievementCompletionHandler");
