// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Double
#include "System/Double.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Math
  class Math : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Math
    Math() noexcept {}
    // Get static field: static private System.Double doubleRoundLimit
    static double _get_doubleRoundLimit();
    // Set static field: static private System.Double doubleRoundLimit
    static void _set_doubleRoundLimit(double value);
    // static field const value: static private System.Int32 maxRoundingDigits
    static constexpr const int maxRoundingDigits = 15;
    // Get static field: static private System.Int32 maxRoundingDigits
    static int _get_maxRoundingDigits();
    // Set static field: static private System.Int32 maxRoundingDigits
    static void _set_maxRoundingDigits(int value);
    // Get static field: static private System.Double[] roundPower10Double
    static ::Array<double>* _get_roundPower10Double();
    // Set static field: static private System.Double[] roundPower10Double
    static void _set_roundPower10Double(::Array<double>* value);
    // static field const value: static public System.Double PI
    static constexpr const double PI = 3.141592653589793;
    // Get static field: static public System.Double PI
    static double _get_PI();
    // Set static field: static public System.Double PI
    static void _set_PI(double value);
    // static field const value: static public System.Double E
    static constexpr const double E = 2.718281828459045;
    // Get static field: static public System.Double E
    static double _get_E();
    // Set static field: static public System.Double E
    static void _set_E(double value);
    // static public System.Double Acos(System.Double d)
    // Offset: 0x18218C0
    static double Acos(double d);
    // static public System.Double Asin(System.Double d)
    // Offset: 0x18218C4
    static double Asin(double d);
    // static public System.Double Atan(System.Double d)
    // Offset: 0x18218C8
    static double Atan(double d);
    // static public System.Double Atan2(System.Double y, System.Double x)
    // Offset: 0x18218CC
    static double Atan2(double y, double x);
    // static public System.Double Ceiling(System.Double a)
    // Offset: 0x18218D0
    static double Ceiling(double a);
    // static public System.Double Cos(System.Double d)
    // Offset: 0x18218D8
    static double Cos(double d);
    // static public System.Double Floor(System.Double d)
    // Offset: 0x18218DC
    static double Floor(double d);
    // static private System.Double InternalTruncate(System.Double d)
    // Offset: 0x18218E4
    static double InternalTruncate(double d);
    // static public System.Double Sin(System.Double a)
    // Offset: 0x1821954
    static double Sin(double a);
    // static public System.Double Tan(System.Double a)
    // Offset: 0x1821958
    static double Tan(double a);
    // static public System.Double Round(System.Double a)
    // Offset: 0x182195C
    static double Round(double a);
    // static private System.Double SplitFractionDouble(System.Double* value)
    // Offset: 0x1821950
    static double SplitFractionDouble(double* value);
    // static public System.Double Truncate(System.Double d)
    // Offset: 0x18219DC
    static double Truncate(double d);
    // static public System.Double Sqrt(System.Double d)
    // Offset: 0x1821A48
    static double Sqrt(double d);
    // static public System.Double Log(System.Double d)
    // Offset: 0x1821A60
    static double Log(double d);
    // static public System.Double Log10(System.Double d)
    // Offset: 0x1821A64
    static double Log10(double d);
    // static public System.Double Pow(System.Double x, System.Double y)
    // Offset: 0x1821A68
    static double Pow(double x, double y);
    // static public System.Int32 Abs(System.Int32 value)
    // Offset: 0x1821A6C
    static int Abs(int value);
    // static private System.Int32 AbsHelper(System.Int32 value)
    // Offset: 0x1821AE4
    static int AbsHelper(int value);
    // static public System.Int64 Abs(System.Int64 value)
    // Offset: 0x1821B84
    static int64_t Abs(int64_t value);
    // static private System.Int64 AbsHelper(System.Int64 value)
    // Offset: 0x1821BFC
    static int64_t AbsHelper(int64_t value);
    // static public System.Single Abs(System.Single value)
    // Offset: 0x1821C9C
    static float Abs(float value);
    // static public System.Double Abs(System.Double value)
    // Offset: 0x1821CA4
    static double Abs(double value);
    // static public System.Decimal Abs(System.Decimal value)
    // Offset: 0x1821CAC
    static System::Decimal Abs(System::Decimal value);
    // static public System.Int32 Max(System.Int32 val1, System.Int32 val2)
    // Offset: 0x1821D24
    static int Max(int val1, int val2);
    // static public System.UInt32 Max(System.UInt32 val1, System.UInt32 val2)
    // Offset: 0x1821D30
    static uint Max(uint val1, uint val2);
    // static public System.Int64 Max(System.Int64 val1, System.Int64 val2)
    // Offset: 0x1821D3C
    static int64_t Max(int64_t val1, int64_t val2);
    // static public System.UInt64 Max(System.UInt64 val1, System.UInt64 val2)
    // Offset: 0x1821D48
    static uint64_t Max(uint64_t val1, uint64_t val2);
    // static public System.Single Max(System.Single val1, System.Single val2)
    // Offset: 0x1821D54
    static float Max(float val1, float val2);
    // static public System.Double Max(System.Double val1, System.Double val2)
    // Offset: 0x1821D98
    static double Max(double val1, double val2);
    // static public System.Int32 Min(System.Int32 val1, System.Int32 val2)
    // Offset: 0x1821E28
    static int Min(int val1, int val2);
    // static public System.UInt32 Min(System.UInt32 val1, System.UInt32 val2)
    // Offset: 0x1821E34
    static uint Min(uint val1, uint val2);
    // static public System.Int64 Min(System.Int64 val1, System.Int64 val2)
    // Offset: 0x1821E40
    static int64_t Min(int64_t val1, int64_t val2);
    // static public System.UInt64 Min(System.UInt64 val1, System.UInt64 val2)
    // Offset: 0x1821E4C
    static uint64_t Min(uint64_t val1, uint64_t val2);
    // static public System.Single Min(System.Single val1, System.Single val2)
    // Offset: 0x1821E58
    static float Min(float val1, float val2);
    // static public System.Double Min(System.Double val1, System.Double val2)
    // Offset: 0x1821E9C
    static double Min(double val1, double val2);
    // static public System.Double Log(System.Double a, System.Double newBase)
    // Offset: 0x1821F2C
    static double Log(double a, double newBase);
    // static private System.Void .cctor()
    // Offset: 0x1822070
    static void _cctor();
  }; // System.Math
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Math*, "System", "Math");
// Writing includes for template specializations
#include "System/Decimal.hpp"
// Writing MetadataGetter for method: System::Math::Acos
// Il2CppName: Acos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Acos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Acos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Asin
// Il2CppName: Asin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Asin)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Asin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Atan
// Il2CppName: Atan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Atan)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Atan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Atan2
// Il2CppName: Atan2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Atan2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Atan2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>(), ::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Ceiling
// Il2CppName: Ceiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Ceiling)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Ceiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Cos
// Il2CppName: Cos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Cos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Cos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Floor
// Il2CppName: Floor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Floor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Floor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::InternalTruncate
// Il2CppName: InternalTruncate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::InternalTruncate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "InternalTruncate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Sin
// Il2CppName: Sin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Sin)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Sin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Tan
// Il2CppName: Tan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Tan)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Tan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Round
// Il2CppName: Round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Round)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::SplitFractionDouble
// Il2CppName: SplitFractionDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double*)>(&System::Math::SplitFractionDouble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "SplitFractionDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double*>()});
  }
};
// Writing MetadataGetter for method: System::Math::Truncate
// Il2CppName: Truncate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Truncate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Truncate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Sqrt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Log)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Log10
// Il2CppName: Log10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Log10)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Log10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Pow
// Il2CppName: Pow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Pow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Pow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>(), ::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Math::Abs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Math::AbsHelper
// Il2CppName: AbsHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Math::AbsHelper)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "AbsHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&System::Math::Abs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Math::AbsHelper
// Il2CppName: AbsHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&System::Math::AbsHelper)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "AbsHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&System::Math::Abs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Abs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(System::Decimal)>(&System::Math::Abs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Decimal>()});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Math::Max)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&System::Math::Max)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int64_t)>(&System::Math::Max)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&System::Math::Max)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&System::Math::Max)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Max)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>(), ::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Math::Min)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&System::Math::Min)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int64_t)>(&System::Math::Min)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&System::Math::Min)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&System::Math::Min)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Min)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>(), ::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Log)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>(), ::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Math::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Math::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
