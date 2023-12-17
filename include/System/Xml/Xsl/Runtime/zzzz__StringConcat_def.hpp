#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringConcat)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Xml::Xsl::Runtime {
struct StringConcat;
}
// Write type traits
MARK_VAL_T(::System::Xml::Xsl::Runtime::StringConcat);
// Type: System.Xml.Xsl.Runtime::StringConcat
namespace System::Xml::Xsl::Runtime {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11592))
// CS Name: ::System.Xml.Xsl.Runtime::StringConcat
struct CORDL_TYPE StringConcat : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field s1 offset 0x0
 __declspec(property(get=__get_s1, put=__set_s1)) ::StringW  s1;

/// @brief Field s2 offset 0x8
 __declspec(property(get=__get_s2, put=__set_s2)) ::StringW  s2;

/// @brief Field s3 offset 0x10
 __declspec(property(get=__get_s3, put=__set_s3)) ::StringW  s3;

/// @brief Field s4 offset 0x18
 __declspec(property(get=__get_s4, put=__set_s4)) ::StringW  s4;

/// @brief Field delimiter offset 0x20
 __declspec(property(get=__get_delimiter, put=__set_delimiter)) ::StringW  delimiter;

/// @brief Field strList offset 0x28
 __declspec(property(get=__get_strList, put=__set_strList)) ::System::Collections::Generic::List_1<::StringW>*  strList;

/// @brief Field idxStr offset 0x30
 __declspec(property(get=__get_idxStr, put=__set_idxStr)) int32_t  idxStr;

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set_s1(::StringW  value) ;

constexpr ::StringW& __get_s1() ;

constexpr ::StringW const& __get_s1() const;

constexpr void __set_s2(::StringW  value) ;

constexpr ::StringW& __get_s2() ;

constexpr ::StringW const& __get_s2() const;

constexpr void __set_s3(::StringW  value) ;

constexpr ::StringW& __get_s3() ;

constexpr ::StringW const& __get_s3() const;

constexpr void __set_s4(::StringW  value) ;

constexpr ::StringW& __get_s4() ;

constexpr ::StringW const& __get_s4() const;

constexpr void __set_delimiter(::StringW  value) ;

constexpr ::StringW& __get_delimiter() ;

constexpr ::StringW const& __get_delimiter() const;

constexpr void __set_strList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_strList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_strList() const;

constexpr void __set_idxStr(int32_t  value) ;

constexpr int32_t& __get_idxStr() ;

constexpr int32_t const& __get_idxStr() const;

/// @brief Method Clear addr 0x28abf98 size 0xc virtual false final false
inline void Clear() ;

/// @brief Method get_Count addr 0x28abfa4 size 0x8 virtual false final false
inline int32_t get_Count() ;

/// @brief Method GetResult addr 0x28abfac size 0xf4 virtual false final false
inline ::StringW GetResult() ;

/// @brief Method ConcatNoDelimiter addr 0x28ac0a0 size 0x2b8 virtual false final false
inline void ConcatNoDelimiter(::StringW  s) ;

// Ctor Parameters [CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s4", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "delimiter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "strList", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "idxStr", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringConcat(::StringW  s1, ::StringW  s2, ::StringW  s3, ::StringW  s4, ::StringW  delimiter, ::System::Collections::Generic::List_1<::StringW>*  strList, int32_t  idxStr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StringConcat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StringConcat()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Xsl::Runtime::StringConcat, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Xsl::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Xsl::Runtime::StringConcat, "System.Xml.Xsl.Runtime", "StringConcat");
