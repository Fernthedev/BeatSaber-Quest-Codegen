#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileStreamAsyncResult)
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::IO {
class FileStreamAsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileStreamAsyncResult);
// Type: System.IO::FileStreamAsyncResult
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3628))
// CS Name: ::System.IO::FileStreamAsyncResult*
class CORDL_TYPE FileStreamAsyncResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field state offset 0x10
 __declspec(property(get=__get_state, put=__set_state)) ::System::Object*  state;

/// @brief Field completed offset 0x18
 __declspec(property(get=__get_completed, put=__set_completed)) bool  completed;

/// @brief Field wh offset 0x20
 __declspec(property(get=__get_wh, put=__set_wh)) ::System::Threading::ManualResetEvent*  wh;

/// @brief Field cb offset 0x28
 __declspec(property(get=__get_cb, put=__set_cb)) ::System::AsyncCallback*  cb;

/// @brief Field completedSynch offset 0x30
 __declspec(property(get=__get_completedSynch, put=__set_completedSynch)) bool  completedSynch;

/// @brief Field Count offset 0x34
 __declspec(property(get=__get_Count, put=__set_Count)) int32_t  Count;

/// @brief Field OriginalCount offset 0x38
 __declspec(property(get=__get_OriginalCount, put=__set_OriginalCount)) int32_t  OriginalCount;

/// @brief Field BytesRead offset 0x3c
 __declspec(property(get=__get_BytesRead, put=__set_BytesRead)) int32_t  BytesRead;

/// @brief Field realcb offset 0x40
 __declspec(property(get=__get_realcb, put=__set_realcb)) ::System::AsyncCallback*  realcb;

 __declspec(property(get=get_AsyncState)) ::System::Object*  AsyncState;

 __declspec(property(get=get_CompletedSynchronously)) bool  CompletedSynchronously;

 __declspec(property(get=get_AsyncWaitHandle)) ::System::Threading::WaitHandle*  AsyncWaitHandle;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::IAsyncResult"
constexpr operator  ::System::IAsyncResult*() noexcept;

constexpr void __set_state(::System::Object*  value) ;

constexpr ::System::Object* __get_state() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_state() const;

constexpr void __set_completed(bool  value) ;

constexpr bool& __get_completed() ;

constexpr bool const& __get_completed() const;

constexpr void __set_wh(::System::Threading::ManualResetEvent*  value) ;

constexpr ::System::Threading::ManualResetEvent* __get_wh() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> __get_wh() const;

constexpr void __set_cb(::System::AsyncCallback*  value) ;

constexpr ::System::AsyncCallback* __get_cb() ;

constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> __get_cb() const;

constexpr void __set_completedSynch(bool  value) ;

constexpr bool& __get_completedSynch() ;

constexpr bool const& __get_completedSynch() const;

constexpr void __set_Count(int32_t  value) ;

constexpr int32_t& __get_Count() ;

constexpr int32_t const& __get_Count() const;

constexpr void __set_OriginalCount(int32_t  value) ;

constexpr int32_t& __get_OriginalCount() ;

constexpr int32_t const& __get_OriginalCount() const;

constexpr void __set_BytesRead(int32_t  value) ;

constexpr int32_t& __get_BytesRead() ;

constexpr int32_t const& __get_BytesRead() const;

constexpr void __set_realcb(::System::AsyncCallback*  value) ;

constexpr ::System::AsyncCallback* __get_realcb() ;

constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> __get_realcb() const;

static inline ::System::IO::FileStreamAsyncResult* New_ctor(::System::AsyncCallback*  cb, ::System::Object*  state) ;

/// @brief Method .ctor addr 0x2540510 size 0xd8 virtual false final false
inline void _ctor(::System::AsyncCallback*  cb, ::System::Object*  state) ;

/// @brief Method CBWrapper addr 0x2541554 size 0x94 virtual false final false
static inline void CBWrapper(::System::IAsyncResult*  ares) ;

/// @brief Method get_AsyncState addr 0x25415e8 size 0x8 virtual true final true
inline ::System::Object* get_AsyncState() ;

/// @brief Method get_CompletedSynchronously addr 0x25415f0 size 0x8 virtual true final true
inline bool get_CompletedSynchronously() ;

/// @brief Method get_AsyncWaitHandle addr 0x25415f8 size 0x8 virtual true final true
inline ::System::Threading::WaitHandle* get_AsyncWaitHandle() ;

/// @brief Method get_IsCompleted addr 0x2541600 size 0x8 virtual true final true
inline bool get_IsCompleted() ;

// Ctor Parameters [CppParam { name: "", ty: "FileStreamAsyncResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileStreamAsyncResult(FileStreamAsyncResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileStreamAsyncResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileStreamAsyncResult(FileStreamAsyncResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FileStreamAsyncResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileStreamAsyncResult, 0x48>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::FileStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStreamAsyncResult*, "System.IO", "FileStreamAsyncResult");
