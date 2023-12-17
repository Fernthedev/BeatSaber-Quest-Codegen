#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexWriter)
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
class RegexCode;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexWriter;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexWriter);
// Type: System.Text.RegularExpressions::RegexWriter
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8932))
// CS Name: ::System.Text.RegularExpressions::RegexWriter
struct CORDL_TYPE RegexWriter : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field _emitted offset 0x0
 __declspec(property(get=__get__emitted, put=__set__emitted)) ::System::Collections::Generic::ValueListBuilder_1<int32_t>  _emitted;

/// @brief Field _intStack offset 0x20
 __declspec(property(get=__get__intStack, put=__set__intStack)) ::System::Collections::Generic::ValueListBuilder_1<int32_t>  _intStack;

/// @brief Field _stringHash offset 0x40
 __declspec(property(get=__get__stringHash, put=__set__stringHash)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _stringHash;

/// @brief Field _stringTable offset 0x48
 __declspec(property(get=__get__stringTable, put=__set__stringTable)) ::System::Collections::Generic::List_1<::StringW>*  _stringTable;

/// @brief Field _caps offset 0x50
 __declspec(property(get=__get__caps, put=__set__caps)) ::System::Collections::Hashtable*  _caps;

/// @brief Field _trackCount offset 0x58
 __declspec(property(get=__get__trackCount, put=__set__trackCount)) int32_t  _trackCount;

constexpr void __set__emitted(::System::Collections::Generic::ValueListBuilder_1<int32_t>  value) ;

constexpr ::System::Collections::Generic::ValueListBuilder_1<int32_t>& __get__emitted() ;

constexpr ::System::Collections::Generic::ValueListBuilder_1<int32_t> const& __get__emitted() const;

constexpr void __set__intStack(::System::Collections::Generic::ValueListBuilder_1<int32_t>  value) ;

constexpr ::System::Collections::Generic::ValueListBuilder_1<int32_t>& __get__intStack() ;

constexpr ::System::Collections::Generic::ValueListBuilder_1<int32_t> const& __get__intStack() const;

constexpr void __set__stringHash(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* __get__stringHash() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> __get__stringHash() const;

constexpr void __set__stringTable(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__stringTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__stringTable() const;

constexpr void __set__caps(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get__caps() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get__caps() const;

constexpr void __set__trackCount(int32_t  value) ;

constexpr int32_t& __get__trackCount() ;

constexpr int32_t const& __get__trackCount() const;

/// @brief Method .ctor addr 0x296a474 size 0x148 virtual false final false
inline void _ctor(::System::Span_1<int32_t>  emittedSpan, ::System::Span_1<int32_t>  intStackSpan) ;

/// @brief Method Write addr 0x296a5bc size 0x104 virtual false final false
static inline ::System::Text::RegularExpressions::RegexCode* Write(::System::Text::RegularExpressions::RegexTree*  tree) ;

/// @brief Method Dispose addr 0x296ab20 size 0x54 virtual false final false
inline void Dispose() ;

/// @brief Method RegexCodeFromRegexTree addr 0x296a6c0 size 0x460 virtual false final false
inline ::System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(::System::Text::RegularExpressions::RegexTree*  tree) ;

/// @brief Method PatchJump addr 0x296b6d0 size 0x64 virtual false final false
inline void PatchJump(int32_t  offset, int32_t  jumpDest) ;

/// @brief Method Emit addr 0x296b734 size 0xe4 virtual false final false
inline void Emit(int32_t  op) ;

/// @brief Method Emit addr 0x296ab74 size 0x14c virtual false final false
inline void Emit(int32_t  op, int32_t  opd1) ;

/// @brief Method Emit addr 0x296b818 size 0x1ac virtual false final false
inline void Emit(int32_t  op, int32_t  opd1, int32_t  opd2) ;

/// @brief Method StringCode addr 0x296b9c4 size 0x14c virtual false final false
inline int32_t StringCode(::StringW  str) ;

/// @brief Method MapCapnum addr 0x296bb10 size 0xb4 virtual false final false
inline int32_t MapCapnum(int32_t  capnum) ;

/// @brief Method EmitFragment addr 0x296acc0 size 0xa10 virtual false final false
inline void EmitFragment(int32_t  nodetype, ::System::Text::RegularExpressions::RegexNode*  node, int32_t  curIndex) ;

// Ctor Parameters [CppParam { name: "_emitted", ty: "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_intStack", ty: "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_stringHash", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: None }, CppParam { name: "_stringTable", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "_caps", ty: "::System::Collections::Hashtable*", modifiers: "", def_value: None }, CppParam { name: "_trackCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegexWriter(::System::Collections::Generic::ValueListBuilder_1<int32_t>  _emitted, ::System::Collections::Generic::ValueListBuilder_1<int32_t>  _intStack, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _stringHash, ::System::Collections::Generic::List_1<::StringW>*  _stringTable, ::System::Collections::Hashtable*  _caps, int32_t  _trackCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RegexWriter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RegexWriter()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexWriter, 0x60>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexWriter, "System.Text.RegularExpressions", "RegexWriter");
