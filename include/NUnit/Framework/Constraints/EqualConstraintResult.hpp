// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintResult
#include "NUnit/Framework/Constraints/ConstraintResult.hpp"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: Tolerance
  class Tolerance;
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
  // Forward declaring type: MessageWriter
  class MessageWriter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.EqualConstraintResult
  // [TokenAttribute] Offset: FFFFFFFF
  class EqualConstraintResult : public NUnit::Framework::Constraints::ConstraintResult {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    // private System.Object expectedValue
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* expectedValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private NUnit.Framework.Constraints.Tolerance tolerance
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Constraints::Tolerance* tolerance;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::Tolerance*) == 0x8);
    // private System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x38
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean clipStrings
    // Size: 0x1
    // Offset: 0x39
    bool clipStrings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clipStrings and: failurePoints
    char __padding3[0x6] = {};
    // private System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint> failurePoints
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* failurePoints;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*) == 0x8);
    // Creating value type constructor for type: EqualConstraintResult
    EqualConstraintResult(::Il2CppObject* expectedValue_ = {}, NUnit::Framework::Constraints::Tolerance* tolerance_ = {}, bool caseInsensitive_ = {}, bool clipStrings_ = {}, System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* failurePoints_ = {}) noexcept : expectedValue{expectedValue_}, tolerance{tolerance_}, caseInsensitive{caseInsensitive_}, clipStrings{clipStrings_}, failurePoints{failurePoints_} {}
    // Get static field: static private readonly System.String StringsDiffer_1
    static ::Il2CppString* _get_StringsDiffer_1();
    // Set static field: static private readonly System.String StringsDiffer_1
    static void _set_StringsDiffer_1(::Il2CppString* value);
    // Get static field: static private readonly System.String StringsDiffer_2
    static ::Il2CppString* _get_StringsDiffer_2();
    // Set static field: static private readonly System.String StringsDiffer_2
    static void _set_StringsDiffer_2(::Il2CppString* value);
    // Get static field: static private readonly System.String StreamsDiffer_1
    static ::Il2CppString* _get_StreamsDiffer_1();
    // Set static field: static private readonly System.String StreamsDiffer_1
    static void _set_StreamsDiffer_1(::Il2CppString* value);
    // Get static field: static private readonly System.String StreamsDiffer_2
    static ::Il2CppString* _get_StreamsDiffer_2();
    // Set static field: static private readonly System.String StreamsDiffer_2
    static void _set_StreamsDiffer_2(::Il2CppString* value);
    // Get static field: static private readonly System.String CollectionType_1
    static ::Il2CppString* _get_CollectionType_1();
    // Set static field: static private readonly System.String CollectionType_1
    static void _set_CollectionType_1(::Il2CppString* value);
    // Get static field: static private readonly System.String CollectionType_2
    static ::Il2CppString* _get_CollectionType_2();
    // Set static field: static private readonly System.String CollectionType_2
    static void _set_CollectionType_2(::Il2CppString* value);
    // Get static field: static private readonly System.String ValuesDiffer_1
    static ::Il2CppString* _get_ValuesDiffer_1();
    // Set static field: static private readonly System.String ValuesDiffer_1
    static void _set_ValuesDiffer_1(::Il2CppString* value);
    // Get static field: static private readonly System.String ValuesDiffer_2
    static ::Il2CppString* _get_ValuesDiffer_2();
    // Set static field: static private readonly System.String ValuesDiffer_2
    static void _set_ValuesDiffer_2(::Il2CppString* value);
    // Get instance field reference: private System.Object expectedValue
    ::Il2CppObject*& dyn_expectedValue();
    // Get instance field reference: private NUnit.Framework.Constraints.Tolerance tolerance
    NUnit::Framework::Constraints::Tolerance*& dyn_tolerance();
    // Get instance field reference: private System.Boolean caseInsensitive
    bool& dyn_caseInsensitive();
    // Get instance field reference: private System.Boolean clipStrings
    bool& dyn_clipStrings();
    // Get instance field reference: private System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint> failurePoints
    System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*& dyn_failurePoints();
    // public System.Void .ctor(NUnit.Framework.Constraints.EqualConstraint constraint, System.Object actual, System.Boolean hasSucceeded)
    // Offset: 0x176C9D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EqualConstraintResult* New_ctor(NUnit::Framework::Constraints::EqualConstraint* constraint, ::Il2CppObject* actual, bool hasSucceeded) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::EqualConstraintResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EqualConstraintResult*, creationType>(constraint, actual, hasSucceeded)));
    }
    // static private System.Void .cctor()
    // Offset: 0x176E794
    static void _cctor();
    // private System.Void DisplayDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.Object expected, System.Object actual, System.Int32 depth)
    // Offset: 0x176CC94
    void DisplayDifferences(NUnit::Framework::Constraints::MessageWriter* writer, ::Il2CppObject* expected, ::Il2CppObject* actual, int depth);
    // private System.Void DisplayStringDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.String expected, System.String actual)
    // Offset: 0x176CF78
    void DisplayStringDifferences(NUnit::Framework::Constraints::MessageWriter* writer, ::Il2CppString* expected, ::Il2CppString* actual);
    // private System.Void DisplayStreamDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.IO.Stream expected, System.IO.Stream actual, System.Int32 depth)
    // Offset: 0x176D680
    void DisplayStreamDifferences(NUnit::Framework::Constraints::MessageWriter* writer, System::IO::Stream* expected, System::IO::Stream* actual, int depth);
    // private System.Void DisplayCollectionDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.ICollection expected, System.Collections.ICollection actual, System.Int32 depth)
    // Offset: 0x176D274
    void DisplayCollectionDifferences(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::ICollection* expected, System::Collections::ICollection* actual, int depth);
    // private System.Void DisplayTypesAndSizes(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.IEnumerable expected, System.Collections.IEnumerable actual, System.Int32 indent)
    // Offset: 0x176DB1C
    void DisplayTypesAndSizes(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::IEnumerable* expected, System::Collections::IEnumerable* actual, int indent);
    // private System.Void DisplayFailurePoint(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.IEnumerable expected, System.Collections.IEnumerable actual, NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint failurePoint, System.Int32 indent)
    // Offset: 0x176DFC8
    void DisplayFailurePoint(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::IEnumerable* expected, System::Collections::IEnumerable* actual, NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint* failurePoint, int indent);
    // private System.Void DisplayEnumerableDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.IEnumerable expected, System.Collections.IEnumerable actual, System.Int32 depth)
    // Offset: 0x176D4C8
    void DisplayEnumerableDifferences(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::IEnumerable* expected, System::Collections::IEnumerable* actual, int depth);
    // public override System.Void WriteMessageTo(NUnit.Framework.Constraints.MessageWriter writer)
    // Offset: 0x176CC84
    // Implemented from: NUnit.Framework.Constraints.ConstraintResult
    // Base method: System.Void ConstraintResult::WriteMessageTo(NUnit.Framework.Constraints.MessageWriter writer)
    void WriteMessageTo(NUnit::Framework::Constraints::MessageWriter* writer);
  }; // NUnit.Framework.Constraints.EqualConstraintResult
  #pragma pack(pop)
  static check_size<sizeof(EqualConstraintResult), 64 + sizeof(System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*)> __NUnit_Framework_Constraints_EqualConstraintResultSizeCheck;
  static_assert(sizeof(EqualConstraintResult) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::EqualConstraintResult*, "NUnit.Framework.Constraints", "EqualConstraintResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Constraints::EqualConstraintResult::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayDifferences
// Il2CppName: DisplayDifferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, ::Il2CppObject*, ::Il2CppObject*, int)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayDifferences)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayDifferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual, depth});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayStringDifferences
// Il2CppName: DisplayStringDifferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, ::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayStringDifferences)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayStringDifferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayStreamDifferences
// Il2CppName: DisplayStreamDifferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, System::IO::Stream*, System::IO::Stream*, int)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayStreamDifferences)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayStreamDifferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual, depth});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayCollectionDifferences
// Il2CppName: DisplayCollectionDifferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, System::Collections::ICollection*, System::Collections::ICollection*, int)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayCollectionDifferences)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayCollectionDifferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual, depth});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayTypesAndSizes
// Il2CppName: DisplayTypesAndSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, System::Collections::IEnumerable*, System::Collections::IEnumerable*, int)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayTypesAndSizes)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* indent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayTypesAndSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual, indent});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayFailurePoint
// Il2CppName: DisplayFailurePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, System::Collections::IEnumerable*, System::Collections::IEnumerable*, NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*, int)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayFailurePoint)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* failurePoint = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "NUnitEqualityComparer/FailurePoint")->byval_arg;
    static auto* indent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayFailurePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual, failurePoint, indent});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::DisplayEnumerableDifferences
// Il2CppName: DisplayEnumerableDifferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*, System::Collections::IEnumerable*, System::Collections::IEnumerable*, int)>(&NUnit::Framework::Constraints::EqualConstraintResult::DisplayEnumerableDifferences)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "DisplayEnumerableDifferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, expected, actual, depth});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraintResult::WriteMessageTo
// Il2CppName: WriteMessageTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraintResult::*)(NUnit::Framework::Constraints::MessageWriter*)>(&NUnit::Framework::Constraints::EqualConstraintResult::WriteMessageTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraintResult*), "WriteMessageTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
