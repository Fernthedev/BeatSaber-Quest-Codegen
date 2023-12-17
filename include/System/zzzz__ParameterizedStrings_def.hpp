#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterizedStrings)
namespace System {
class Object;
}
namespace System {
class __ParameterizedStrings__LowLevelStack;
}
namespace System {
struct __ParameterizedStrings__FormatParam;
}
// Forward declare root types
namespace System {
class ParameterizedStrings;
}
namespace System {
class __ParameterizedStrings__LowLevelStack;
}
namespace System {
struct __ParameterizedStrings__FormatParam;
}
// Write type traits
MARK_REF_PTR_T(::System::ParameterizedStrings);
MARK_REF_PTR_T(::System::__ParameterizedStrings__LowLevelStack);
MARK_VAL_T(::System::__ParameterizedStrings__FormatParam);
// Type: ::FormatParam
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2620))
// CS Name: ::ParameterizedStrings::FormatParam
struct CORDL_TYPE __ParameterizedStrings__FormatParam : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _int32 offset 0x0
 __declspec(property(get=__get__int32, put=__set__int32)) int32_t  _int32;

/// @brief Field _string offset 0x8
 __declspec(property(get=__get__string, put=__set__string)) ::StringW  _string;

 __declspec(property(get=get_Int32)) int32_t  Int32;

 __declspec(property(get=get_String)) ::StringW  String;

 __declspec(property(get=get_Object)) ::System::Object*  Object;

constexpr void __set__int32(int32_t  value) ;

constexpr int32_t& __get__int32() ;

constexpr int32_t const& __get__int32() const;

constexpr void __set__string(::StringW  value) ;

constexpr ::StringW& __get__string() ;

constexpr ::StringW const& __get__string() const;

/// @brief Method .ctor addr 0x26063e0 size 0xc virtual false final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor addr 0x26063ec size 0xc virtual false final false
inline void _ctor(int32_t  intValue, ::StringW  stringValue) ;

/// @brief Method op_Implicit addr 0x2602ea8 size 0xc virtual false final false
static inline ::System::__ParameterizedStrings__FormatParam op_Implicit___System____ParameterizedStrings__FormatParam(int32_t  value) ;

/// @brief Method get_Int32 addr 0x26063f8 size 0x8 virtual false final false
inline int32_t get_Int32() ;

/// @brief Method get_String addr 0x2605c6c size 0x54 virtual false final false
inline ::StringW get_String() ;

/// @brief Method get_Object addr 0x2605cc0 size 0x5c virtual false final false
inline ::System::Object* get_Object() ;

// Ctor Parameters [CppParam { name: "_int32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_string", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __ParameterizedStrings__FormatParam(int32_t  _int32, ::StringW  _string) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParameterizedStrings__FormatParam(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParameterizedStrings__FormatParam()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__ParameterizedStrings__FormatParam, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: ::LowLevelStack
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2621))
// CS Name: ::ParameterizedStrings::LowLevelStack*
class CORDL_TYPE __ParameterizedStrings__LowLevelStack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _arr offset 0x10
 __declspec(property(get=__get__arr, put=__set__arr)) ::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>  _arr;

/// @brief Field _count offset 0x18
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

constexpr void __set__arr(::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>  value) ;

constexpr ::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>& __get__arr() ;

constexpr ::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*> const& __get__arr() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

static inline ::System::__ParameterizedStrings__LowLevelStack* New_ctor() ;

/// @brief Method .ctor addr 0x2605304 size 0x50 virtual false final false
inline void _ctor() ;

/// @brief Method Pop addr 0x2605bd8 size 0x94 virtual false final false
inline ::System::__ParameterizedStrings__FormatParam Pop() ;

/// @brief Method Push addr 0x2605f70 size 0xd8 virtual false final false
inline void Push(::System::__ParameterizedStrings__FormatParam  item) ;

/// @brief Method Clear addr 0x2605354 size 0x28 virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "__ParameterizedStrings__LowLevelStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ParameterizedStrings__LowLevelStack(__ParameterizedStrings__LowLevelStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ParameterizedStrings__LowLevelStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ParameterizedStrings__LowLevelStack(__ParameterizedStrings__LowLevelStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ParameterizedStrings__LowLevelStack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__ParameterizedStrings__LowLevelStack, 0x20>, "Size mismatch!");

} // namespace end def System
// Type: System::ParameterizedStrings
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2622))
// CS Name: ::System::ParameterizedStrings*
class CORDL_TYPE ParameterizedStrings : public ::System::Object {
public:
// Declarations
using LowLevelStack = ::System::__ParameterizedStrings__LowLevelStack;

using FormatParam = ::System::__ParameterizedStrings__FormatParam;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__cachedStack(::System::__ParameterizedStrings__LowLevelStack*  value) ;

static inline ::System::__ParameterizedStrings__LowLevelStack* getStaticF__cachedStack() ;

/// @brief Method Evaluate addr 0x2602eb4 size 0x16c virtual false final false
static inline ::StringW Evaluate(::StringW  format, ::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>  args) ;

/// @brief Method EvaluateInternal addr 0x260537c size 0x85c virtual false final false
static inline ::StringW EvaluateInternal(::StringW  format, ByRef<int32_t>  pos, ::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>  args, ::System::__ParameterizedStrings__LowLevelStack*  stack, ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>>  dynamicVars, ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>>  staticVars) ;

/// @brief Method AsBool addr 0x2606158 size 0xc virtual false final false
static inline bool AsBool(int32_t  i) ;

/// @brief Method AsInt addr 0x2606150 size 0x8 virtual false final false
static inline int32_t AsInt(bool  b) ;

/// @brief Method StringFromAsciiBytes addr 0x2606164 size 0xf8 virtual false final false
static inline ::StringW StringFromAsciiBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method snprintf addr 0x260625c size 0xcc virtual false final false
static inline int32_t snprintf(::cordl_internals::Ptr<uint8_t>  str, ::cordl_internals::intptr_t  size, ::StringW  format, ::StringW  arg1) ;

/// @brief Method snprintf addr 0x2606328 size 0xb8 virtual false final false
static inline int32_t snprintf(::cordl_internals::Ptr<uint8_t>  str, ::cordl_internals::intptr_t  size, ::StringW  format, int32_t  arg1) ;

/// @brief Method FormatPrintF addr 0x2605d1c size 0x254 virtual false final false
static inline ::StringW FormatPrintF(::StringW  format, ::System::Object*  arg) ;

/// @brief Method GetDynamicOrStaticVariables addr 0x2606048 size 0x108 virtual false final false
static inline ::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*> GetDynamicOrStaticVariables(char16_t  c, ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>>  dynamicVars, ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam,::Array<::System::__ParameterizedStrings__FormatParam>*>>  staticVars, ByRef<int32_t>  index) ;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterizedStrings(ParameterizedStrings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterizedStrings(ParameterizedStrings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParameterizedStrings()  = default;
public:


// Fields

// Static field _cachedStack


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParameterizedStrings, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ParameterizedStrings);
DEFINE_IL2CPP_ARG_TYPE(::System::ParameterizedStrings*, "System", "ParameterizedStrings");
NEED_NO_BOX(::System::__ParameterizedStrings__LowLevelStack);
DEFINE_IL2CPP_ARG_TYPE(::System::__ParameterizedStrings__LowLevelStack*, "System", "ParameterizedStrings/LowLevelStack");
DEFINE_IL2CPP_ARG_TYPE(::System::__ParameterizedStrings__FormatParam, "System", "ParameterizedStrings/FormatParam");
