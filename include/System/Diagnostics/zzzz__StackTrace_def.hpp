#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StackTrace)
namespace System {
class Type;
}
namespace System::Diagnostics {
struct __StackTrace__TraceFormat;
}
namespace System::Diagnostics {
class StackFrame;
}
namespace System {
class Exception;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Reflection {
class MethodBase;
}
// Forward declare root types
namespace System::Diagnostics {
struct __StackTrace__TraceFormat;
}
namespace System::Diagnostics {
class StackTrace;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::__StackTrace__TraceFormat);
MARK_REF_PTR_T(::System::Diagnostics::StackTrace);
// Type: ::TraceFormat
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3740))
// CS Name: ::StackTrace::TraceFormat
struct CORDL_TYPE __StackTrace__TraceFormat : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____StackTrace__TraceFormat_Unwrapped
enum struct ____StackTrace__TraceFormat_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_TrailingNewLine = static_cast<int32_t>(0x1),
__E_NoResourceLookup = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::System::Diagnostics::__StackTrace__TraceFormat const Normal;

/// @brief Field TrailingNewLine value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::__StackTrace__TraceFormat const TrailingNewLine;

/// @brief Field NoResourceLookup value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::__StackTrace__TraceFormat const NoResourceLookup;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____StackTrace__TraceFormat_Unwrapped () const noexcept {
return std::bit_cast<____StackTrace__TraceFormat_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StackTrace__TraceFormat(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StackTrace__TraceFormat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StackTrace__TraceFormat()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__StackTrace__TraceFormat, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
// Type: System.Diagnostics::StackTrace
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3741))
// CS Name: ::System.Diagnostics::StackTrace*
class CORDL_TYPE StackTrace : public ::System::Object {
public:
// Declarations
using TraceFormat = ::System::Diagnostics::__StackTrace__TraceFormat;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field METHODS_TO_SKIP offset 0x0
static constexpr int32_t  METHODS_TO_SKIP{static_cast<int32_t>(0x0)};

/// @brief Field prefix offset 0x0
static constexpr ::ConstString  prefix{u"  at "};

/// @brief Field frames offset 0x10
 __declspec(property(get=__get_frames, put=__set_frames)) ::ArrayW<::System::Diagnostics::StackFrame*,::Array<::System::Diagnostics::StackFrame*>*>  frames;

/// @brief Field captured_traces offset 0x18
 __declspec(property(get=__get_captured_traces, put=__set_captured_traces)) ::ArrayW<::System::Diagnostics::StackTrace*,::Array<::System::Diagnostics::StackTrace*>*>  captured_traces;

/// @brief Field debug_info offset 0x20
 __declspec(property(get=__get_debug_info, put=__set_debug_info)) bool  debug_info;

 __declspec(property(get=get_FrameCount)) int32_t  FrameCount;

constexpr void __set_frames(::ArrayW<::System::Diagnostics::StackFrame*,::Array<::System::Diagnostics::StackFrame*>*>  value) ;

constexpr ::ArrayW<::System::Diagnostics::StackFrame*,::Array<::System::Diagnostics::StackFrame*>*>& __get_frames() ;

constexpr ::ArrayW<::System::Diagnostics::StackFrame*,::Array<::System::Diagnostics::StackFrame*>*> const& __get_frames() const;

constexpr void __set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*,::Array<::System::Diagnostics::StackTrace*>*>  value) ;

constexpr ::ArrayW<::System::Diagnostics::StackTrace*,::Array<::System::Diagnostics::StackTrace*>*>& __get_captured_traces() ;

constexpr ::ArrayW<::System::Diagnostics::StackTrace*,::Array<::System::Diagnostics::StackTrace*>*> const& __get_captured_traces() const;

constexpr void __set_debug_info(bool  value) ;

constexpr bool& __get_debug_info() ;

constexpr bool const& __get_debug_info() const;

static inline void setStaticF_isAotidSet(bool  value) ;

static inline bool getStaticF_isAotidSet() ;

static inline void setStaticF_aotid(::StringW  value) ;

static inline ::StringW getStaticF_aotid() ;

static inline ::System::Diagnostics::StackTrace* New_ctor() ;

/// @brief Method .ctor addr 0x257a2fc size 0x24 virtual false final false
inline void _ctor() ;

static inline ::System::Diagnostics::StackTrace* New_ctor(bool  fNeedFileInfo) ;

/// @brief Method .ctor addr 0x257a51c size 0x30 virtual false final false
inline void _ctor(bool  fNeedFileInfo) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t  skipFrames) ;

/// @brief Method .ctor addr 0x257a54c size 0x30 virtual false final false
inline void _ctor(int32_t  skipFrames) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method .ctor addr 0x257a57c size 0x34 virtual false final false
inline void _ctor(int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method init_frames addr 0x257a320 size 0x1fc virtual false final false
inline void init_frames(int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method get_trace addr 0x257a5b0 size 0x8 virtual false final false
static inline ::ArrayW<::System::Diagnostics::StackFrame*,::Array<::System::Diagnostics::StackFrame*>*> get_trace(::System::Exception*  e, int32_t  skipFrames, bool  fNeedFileInfo) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception*  e, bool  fNeedFileInfo) ;

/// @brief Method .ctor addr 0x257a5b8 size 0xc virtual false final false
inline void _ctor(::System::Exception*  e, bool  fNeedFileInfo) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception*  e, int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method .ctor addr 0x257a5c4 size 0xf0 virtual false final false
inline void _ctor(::System::Exception*  e, int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method get_FrameCount addr 0x257a6b4 size 0x18 virtual true final false
inline int32_t get_FrameCount() ;

/// @brief Method GetFrame addr 0x257a6cc size 0x60 virtual true final false
inline ::System::Diagnostics::StackFrame* GetFrame(int32_t  index) ;

/// @brief Method GetAotId addr 0x257a72c size 0xc8 virtual false final false
static inline ::StringW GetAotId() ;

/// @brief Method AddFrames addr 0x257a7f4 size 0x4b0 virtual false final false
inline bool AddFrames(::System::Text::StringBuilder*  sb, bool  separator, ByRef<bool>  isAsync) ;

/// @brief Method GetFullNameForStackTrace addr 0x257aca4 size 0x658 virtual false final false
inline void GetFullNameForStackTrace(::System::Text::StringBuilder*  sb, ::System::Reflection::MethodBase*  mi, bool  needsNewLine, ByRef<bool>  skipped, ByRef<bool>  isAsync) ;

/// @brief Method ConvertAsyncStateMachineMethod addr 0x257b2fc size 0x460 virtual false final false
static inline void ConvertAsyncStateMachineMethod(ByRef<::System::Reflection::MethodBase*>  method, ByRef<::System::Type*>  declaringType) ;

/// @brief Method ToString addr 0x257b75c size 0x15c virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x257b8b8 size 0xc virtual false final false
inline ::StringW ToString(::System::Diagnostics::__StackTrace__TraceFormat  traceFormat) ;

// Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StackTrace(StackTrace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StackTrace(StackTrace const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StackTrace()  = default;
public:


// Fields

// Static field isAotidSet

// Static field aotid


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackTrace, 0x28>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__StackTrace__TraceFormat, "System.Diagnostics", "StackTrace/TraceFormat");
NEED_NO_BOX(::System::Diagnostics::StackTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTrace*, "System.Diagnostics", "StackTrace");
