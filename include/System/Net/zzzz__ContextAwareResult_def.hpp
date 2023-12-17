#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextAwareResult)
namespace System::Net {
struct __ContextAwareResult__StateFlags;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Net {
class __ContextAwareResult____c;
}
namespace System::Threading {
class ContextCallback;
}
// Forward declare root types
namespace System::Net {
struct __ContextAwareResult__StateFlags;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class __ContextAwareResult____c;
}
// Write type traits
MARK_VAL_T(::System::Net::__ContextAwareResult__StateFlags);
MARK_REF_PTR_T(::System::Net::ContextAwareResult);
MARK_REF_PTR_T(::System::Net::__ContextAwareResult____c);
// Type: ::StateFlags
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9018))
// CS Name: ::ContextAwareResult::StateFlags
struct CORDL_TYPE __ContextAwareResult__StateFlags : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____ContextAwareResult__StateFlags_Unwrapped
enum struct ____ContextAwareResult__StateFlags_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_CaptureIdentity = static_cast<uint8_t>(0x1u),
__E_CaptureContext = static_cast<uint8_t>(0x2u),
__E_ThreadSafeContextCopy = static_cast<uint8_t>(0x4u),
__E_PostBlockStarted = static_cast<uint8_t>(0x8u),
__E_PostBlockFinished = static_cast<uint8_t>(0x10u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field None value: static_cast<uint8_t>(0x0u)
static ::System::Net::__ContextAwareResult__StateFlags const None;

/// @brief Field CaptureIdentity value: static_cast<uint8_t>(0x1u)
static ::System::Net::__ContextAwareResult__StateFlags const CaptureIdentity;

/// @brief Field CaptureContext value: static_cast<uint8_t>(0x2u)
static ::System::Net::__ContextAwareResult__StateFlags const CaptureContext;

/// @brief Field ThreadSafeContextCopy value: static_cast<uint8_t>(0x4u)
static ::System::Net::__ContextAwareResult__StateFlags const ThreadSafeContextCopy;

/// @brief Field PostBlockStarted value: static_cast<uint8_t>(0x8u)
static ::System::Net::__ContextAwareResult__StateFlags const PostBlockStarted;

/// @brief Field PostBlockFinished value: static_cast<uint8_t>(0x10u)
static ::System::Net::__ContextAwareResult__StateFlags const PostBlockFinished;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ContextAwareResult__StateFlags_Unwrapped () const noexcept {
return std::bit_cast<____ContextAwareResult__StateFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __ContextAwareResult__StateFlags(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ContextAwareResult__StateFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ContextAwareResult__StateFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ContextAwareResult__StateFlags, 0x1>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<>c
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9019))
// CS Name: ::ContextAwareResult::<>c*
class CORDL_TYPE __ContextAwareResult____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Net::__ContextAwareResult____c*  value) ;

static inline ::System::Net::__ContextAwareResult____c* getStaticF___9() ;

static inline void setStaticF___9__17_0(::System::Threading::ContextCallback*  value) ;

static inline ::System::Threading::ContextCallback* getStaticF___9__17_0() ;

static inline ::System::Net::__ContextAwareResult____c* New_ctor() ;

/// @brief Method .ctor addr 0x29885bc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Complete>b__17_0 addr 0x29885c4 size 0x80 virtual false final false
inline void _Complete_b__17_0(::System::Object*  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__ContextAwareResult____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ContextAwareResult____c(__ContextAwareResult____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ContextAwareResult____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ContextAwareResult____c(__ContextAwareResult____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ContextAwareResult____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__17_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ContextAwareResult____c, 0x10>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::ContextAwareResult
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9107))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9020))
// CS Name: ::System.Net::ContextAwareResult*
class CORDL_TYPE ContextAwareResult : public ::System::Net::LazyAsyncResult {
public:
// Declarations
using __c = ::System::Net::__ContextAwareResult____c;

using StateFlags = ::System::Net::__ContextAwareResult__StateFlags;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Net::LazyAsyncResult)]{};

/// @brief Field _context offset 0x40
 __declspec(property(get=__get__context, put=__set__context)) ::System::Threading::ExecutionContext*  _context;

/// @brief Field _lock offset 0x48
 __declspec(property(get=__get__lock, put=__set__lock)) ::System::Object*  _lock;

/// @brief Field _flags offset 0x50
 __declspec(property(get=__get__flags, put=__set__flags)) ::System::Net::__ContextAwareResult__StateFlags  _flags;

constexpr void __set__context(::System::Threading::ExecutionContext*  value) ;

constexpr ::System::Threading::ExecutionContext* __get__context() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> __get__context() const;

constexpr void __set__lock(::System::Object*  value) ;

constexpr ::System::Object* __get__lock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__lock() const;

constexpr void __set__flags(::System::Net::__ContextAwareResult__StateFlags  value) ;

constexpr ::System::Net::__ContextAwareResult__StateFlags& __get__flags() ;

constexpr ::System::Net::__ContextAwareResult__StateFlags const& __get__flags() const;

/// @brief Method SafeCaptureIdentity addr 0x2987814 size 0x4 virtual false final false
inline void SafeCaptureIdentity() ;

/// @brief Method CleanupInternal addr 0x2987818 size 0x4 virtual false final false
inline void CleanupInternal() ;

static inline ::System::Net::ContextAwareResult* New_ctor(::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method .ctor addr 0x298781c size 0x8 virtual false final false
inline void _ctor(::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

static inline ::System::Net::ContextAwareResult* New_ctor(bool  captureIdentity, bool  forceCaptureContext, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method .ctor addr 0x2987824 size 0x50 virtual false final false
inline void _ctor(bool  captureIdentity, bool  forceCaptureContext, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

static inline ::System::Net::ContextAwareResult* New_ctor(bool  captureIdentity, bool  forceCaptureContext, bool  threadSafeContextCopy, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method .ctor addr 0x2987874 size 0x78 virtual false final false
inline void _ctor(bool  captureIdentity, bool  forceCaptureContext, bool  threadSafeContextCopy, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method StartPostingAsyncOp addr 0x29878ec size 0x8 virtual false final false
inline ::System::Object* StartPostingAsyncOp() ;

/// @brief Method StartPostingAsyncOp addr 0x29878f4 size 0xfc virtual false final false
inline ::System::Object* StartPostingAsyncOp(bool  lockCapture) ;

/// @brief Method FinishPostingAsyncOp addr 0x2987ac0 size 0x44 virtual false final false
inline bool FinishPostingAsyncOp() ;

/// @brief Method Cleanup addr 0x2987edc size 0xa0 virtual true final false
inline void Cleanup() ;

/// @brief Method CaptureOrComplete addr 0x2987b04 size 0x3d8 virtual false final false
inline bool CaptureOrComplete(ByRef<::System::Threading::ExecutionContext*>  cachedContext, bool  returnContext) ;

/// @brief Method Complete addr 0x29881a0 size 0x2e8 virtual true final false
inline void Complete(::cordl_internals::intptr_t  userToken) ;

/// @brief Method CompleteCallback addr 0x2988488 size 0xd0 virtual false final false
inline void CompleteCallback() ;

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextAwareResult(ContextAwareResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextAwareResult(ContextAwareResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContextAwareResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ContextAwareResult, 0x58>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ContextAwareResult__StateFlags, "System.Net", "ContextAwareResult/StateFlags");
NEED_NO_BOX(::System::Net::ContextAwareResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContextAwareResult*, "System.Net", "ContextAwareResult");
NEED_NO_BOX(::System::Net::__ContextAwareResult____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ContextAwareResult____c*, "System.Net", "ContextAwareResult/<>c");
